## Ereditarietà

implementa la relazione di classe di generalizzazione, una classe viene definita come un'altra classe più qualcos'altro

terminologia:
* classe base, superclasse, supertipo, padre
* classe derivata, sottoclasse, sottotipo, figlio

i casi d'uso tipici dell'ereditarietà sono:
* estensione di un tipo
    * la sottoclasse aggiunge funzionalità alla superclasse
* specializzazione di un tipo
    * la sottoclasse è un tipo concreto della superclasse astratta
* ridefinizione di un tipo
    * la sottoclasse reimplementa i metodi della superclasse (override)
* riutilizzo di codice
    * non c'è vera ereditarietà, la sottoclasse riutilizza solo il codice, senza subtyping

**gerarchie di classi**

un sottotipo di dice diretto se deriva direttamente da una classe, indiretto se ci sono uno o più livelli di indirettezza tra il sottotipo e la superclasse

**subtyping di tipo**

vale solo per l'ereditarietà pubblica

è una forma di polimorfismo sui tipi, nella quale il sottotipo è un tipo di dato è in relazione ad un altro tipo di dato, mediante il concetto di sustituibiità

di base quindi funzioni che operano su una superclasse devono operare normalmente anche sulle sue sottoclassi

**subtyping su puntatori**

è il polimorfismo, un puntatore ad una superclasse deve tranquillamente poter puntare ad una sottoclasse

**subtyping su riferimenti**

come per i puntatori

**protected**

protected significa accessibile mediante sottoggetti

di base è la stessa cosa con il private, fuori dalla classe nemmeno un oggetto della classe stessa può accedere ai membri privati, nello stesso modo, la classe stessa non può accedere nemmeno alla parte protetta

**tipi di ereditarietà**

ci sono 3 tipi di ereditarietà:
* sottoclasse : public superclasse --> ereditarietà di tipo
    * i membri privati della superclasse sono inaccessibili alla sottoclasse
    * i membri protetti della superclasse vengono ereditati come membri protetti 
    * i membri pubblici della superclasse vegnon ereditati come membri pubblici
* sottoclasse : protected superclasse --> viola information hiding, poco utilizzato
    * i membri privati della superclasse sono inaccessibili alla sottoclasse
    * i membri protetti della superclasse vengono ereditati come membri protetti 
    * i membri pubblici della superclasse vengono ereditati come membri protetti 
* sottoclasse : private superclasse --> riutillizzo di codice, non supporta subtyping
    * i membri privati della superclasse sono inaccessibili alla sottoclasse
    * i membri protetti della superclasse vegnono ereditati come membri privati
    * i membri pubblici della superclasse vegnono ereditati come membri privati

**ereditarietà privata vs has-a**

similarità:
* entrambi creano un sottooggetto
* non c'è subtyping

differenze:
* è necessaria la relazione di composizione se servono più oggetti
* l'ereditarietà privata introduce l'ereditarietà mulitpla non necessaria
* l'ereditarietà privata permette il subtyping di puntatore (polimorfismo)
* l'ereditarietà privata da accesso alla parte protetta

**ereditarietà ed amicizia**

le dichiarazioni di amicizia NON sono ereditabili

**ridefinizione dei campi**

una sottoclasse può ridefinire i campi della superclasse (ad esempio cambiandone tipo)

**ridefinizione dei metodi**

una sottoclasse può reimplementare i metodi della superclasse

**name hiding rule**

la ridefinizione di un metodo in una sottoclasse nasconde sempre il metodo della superclasse (solo accessibile tramite scoping)

vuol dire che metodi anche con argomenti diversi vengono nascosti da una sottoclasse che ridefinisce il metodo

**costruttore di default**

i costruttori delle sottoclassi possono contenere chiamate ai costruttori della superclasse nella lista di inizializzazione

l'ordine di costruzione del compilatore è:
* prima il sottoggetto
* poi i membri dati

la costruzione avviene nel seguente modo:
1. viene sempre invocato implicitamente o eplicitamente il costruttore di default del sottoggetto
2. vengono costruiti i campi della sottoclasse
3. viene eseguito il corpo del costruttore

**costruttore di default standard**

in assenza di un costruttore di default definito dall'utente, quello standard del compilatore si preoccuperà della costruzione, nel seguente modo:
1. viene invocato il costruttore di default del sottoggetto
2. vengono costruiti i campi dati con il loro costruttori di default

**costruttore di copia**

la costruzione di copia ridefinita costruisce di **default** i membri della classe, se la lista di inizializzazione è vuota

**costruttore di copia standard**

la costruzione di copia standard funziona nel seguente modo:
1. il sottogetto dell'oggetto di invocazione viene creato di copia con il parametro del costruttore di copia
2. i membri dati dell'oggetto di invocazione vengon creati di copia con i membri dati del parametro del costruttore di copia

**assegnazione standard**

si comporta nel seguente modo:
1. il parametro viene assegnato al sottoggetto dell'oggetto di invocazione
2. campo per campo vengono assegnati il membri dati del parametro all'oggetto di invocazione

**distruzione standard**

si comporta nel seguente modo:
1. invoca il distruttore sui membri dati
2. invoca il distruttore sul sottoggetto

**esercizio**

```c++
/*
definire una superclasse contobancario e 2 sottoclassi, contocorrente e contorisparmio, dove:
1. ogni contobancario ha un saldo e rende disponibili 2 funzionalità: deposito e prelievo
2. ogni contocorrente ha una spesa fissa che verrà detratta dal saldo ad ogni operazione di deposito e prelievo
3. ogni contorisparmio deve avere un saldo non negativo e le operazioni di deposito e prelievo non comportano costi aggiuntivi e restituiscono il saldo

definire inoltre una classe contoarancio sottoclasse di contorisparmio, che contiene un contocorrente, quando si deposita sul contoarancio, la somma viene prelevata dal contocorrente di appoggio e quando si preleva la somma viene depositata
*/

class contobancario
{
    private:
        double saldo;
    public:
        contobancario(double s = 0.0) : saldo(s) {}

        double deposita(double x) {
            return saldo+=x;
        }
        
        double preleva(double x) {
            return saldo-=x;
        }

        double Saldo() {
            return saldo;
        }
};

class contocorrente : public contobancario
{
    private:
        static double spesa_fissa;
    public:
        double deposita(double x) {
            return contobancario::deposita(x - spesa_fissa);
        }
        
        double preleva(double x) {
            return contobancario::preleva(x + spesa_fissa);
        }
};

class contorisparmio : public contobancario
{
    private:
    public:
        contorisparmio(double s = 0.0) : contobancario(s) {}

        double deposita(double x) {
            return contobancario::deposita(x);
        }
        
        double preleva(double x) {
            return (x <= Saldo()) ? contobancario::preleva(x): Saldo();
        }
};

class contoarancio : contorisparmio
{
    private:
        contocorrente& appoggio;
    public:
        contoarancio(contocorrente& cc, double s = 0.0) :
        contorisparmio(s),
        appoggio(cc)
        {}

        double deposita(double x) {
            if(x >= 0)
            {
                appoggio.preleva(x);
                contorisparmio::deposita(x);
            }
            return Saldo();

        }
        
        double preleva(double x) {
            if(x <= Saldo() && x >= 0)
            {
                appoggio.deposita(x);
                return contorisparmio::preleva(x);
            }
            return Saldo();
        }
};
```