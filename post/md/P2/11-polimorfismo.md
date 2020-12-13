## polimorfismo

si tratta del subtyping di puntatori e riferimenti, ma non di tipo

di base consiste in una superclasse che utilizza il suo tipo statico per interpretare un tipo derivato

```c++
super base;
sotto deriv;

super* base_ptr = &deriv;
sotto* deriv_ptr = &base;

// polimorfismo
base_ptr = deriv_ptr;
// base_ptr ha tipo statico super* e tipo dinamico sotto*
```

**tipo statico**

è il tipo di dichiarazione di un oggetto, quello definito nel sorgente

**tipo dinamico**

è il tipo di un oggetto in runtime

**static binding**

è il normale collegamento che il compilatore crea tra l'oggetto e metodo di una classe

in un contesto polimorfico dove si invoca un metodo definito sia nella superclasse che nella sottoclasse, viene comunque invocato quello della superclasse, in quanto il compilatore non conosce il tipo a runtime, quindi collega l'oggetto di tipo dinamico della sottoclasse con il metodo del tipo statico

**dynamic binding**

detto anche late binding, è il collegamento creato a runtime tra un puntatore polimorfo e il metodo di una sottoclasse

linkare a runtime il metodo giusto crea un overhead intorno al ~10%, questo è causato dal doppio livello di indirettezza della virtual table

**virtual**

un metodo marcato come virtual permette alle sottoclassi di farne l'overriding, ciò permette di fare il binding dinamico

di base il comportamento del compilatore è:
* cerca sempre il metodo nella classe del tipo statico
* se c'è e non è marcato virtual fa il binding statico
* se c'è ed è marcato virtual fa il binding con il prototipo della metodo virtuale ed a runtime verrà deciso il giusto metodo
* se non c'è da errore di compilazione

nb: la parte fondamentale è capire che il compilatore cerca sempre nel tipo statico e se trova virtual decide cosa fare in base al tipo dinamico

quando si utilizza l'operatore di scoping il binding è sempre statico

per decidere se usare o meno il virtual bisogna considerare se si utilizzerà o meno la superclasse in un contesto polimorfico

**overriding**

consiste nel ridefinire un metodo virtuale, che soddisfa le seguenti regole:
* firma identica
* tipo di ritorno uguale o covarinate
    * covariante significa che se il tipo di ritorno è un puntatore ad una superclasse, si può sostituire con un puntatore ad una sottoclasse
* se il metodo virtuale ha valori di default, questi valori non vanno messo nell'override

l'override si fa nel seguente modo:
```c++
class A{
    public:
        virtual void f() {...}
}

class B : public A{
    public:
        virtual void f() {...}
}
```

**virtual method table**

la virtual table è il meccanismo di implementazione del dynamic binding

quando una classe dichiara un metodo virtuale il compilatore aggiunge nella classe un puntatore nascosto (virtual pointer), questo puntatore punta ad un array di puntatori a indirizzi di funzione (function pointer), che contengnono tutti gli indirizzi di metodi virtuali della classe, che a loro volta puntano al loro codice

quindi, in una normale superclasse:
* virtual pointer --> virtual table --> codice metodi

una sottoclasse possiede il proprio virtual pointer ela propria virtual table, al momento della derivazoine però la virtual table della sottoclasse viene riempita con la virtual table della superclasse e per la sottoclasse fare l'override significa far puntare il metodo della sua virtual table ad un'altra sezione di codice

quindi, nella sottoclasse:
* virtual pointer --> virtual table (almeno grande quanto quella della super classe) --> codice metodi (diversi su quelli con override)

ogni sottoclasse di una superclasse polimorfa (con metodi virtuali) è polimorfa

**distruttore virtuale**

siccome il binding statico viene fatto anche per i distruttori, quando una un puntatore polimorfo va a distruggere ciò a cui punta, viene distrutto solo il sottoggetto

per risolvere ciò la superclasse marca il distruttore come virtual, la sottoclasse fa l'override e cos' il puntatore polimorfo utilizza il giusto distruttore

**classe polimorfa**

è una classe che include almeno un metodo virtuale

**classe astratta**

è una classe che contiene almeno un metodo virtuale puro e non è instanziabile

i campi dati possono tranquillamente esserci

se si vuole creare una classe astratta senza metodi puri a caso basta segnare il distruttore come distruttore puro

**metodo virtuale puro**

è un metodo virtuale che non ha implementazione

viene così specificato:
```c++
class A{
    public:
        virtual void f() = 0;
}
```

i metodi virtuali puri sono dei contratti, le sottoclassi se vogliono essere istanziabili lo devono implementare, altrimenti rimangono astratte

**classe astratta pura**

è una classe che contiene solo metodi virtuali puri

**interfaccia**

sinonimo di classe astratta pura

**classe concreta**

è una classe che può essere istanziata

**rtti (RunTime Type Information)**

è un meccanismo che consente di ottenere informazioni sul tipo di un oggetto a runtime, i meccanismi sono 2:
* typeid --> determina il tipo di un oggetto a runtime
* dynamic_cast

**typeid**

il typeid funziona sotto le seguenti regole:
* se l'espressione è un riferimento ad una classe polimorfa, ritorna il tipo dinamico
* se l'espressione è un puntatore polimorfo dereferenziato, ritorna 

**dynamic cast**

data una superclasse polimorfa e una sottoclasse, la conversione di un puntatore della superclasse ad uno della sottoclasse è detto downcast ed è effetuato dal dynamic_cast

il dynamic_cast ritorna nullptr se i 2 tipi non sono compatibili (cioè se il tipo dinamico è sottoclasse del tipo statico)

**upcasting**

è una conversione da puntatore sottoclasse a puntatore superclasse

**downcast**

è una conversione da puntatore superclasse a punattore sottoclasse, viene fatta con il static_cast

**solid**

* le classe devono occuparsi di una cosa sola
* chiuso per modifiche, aperto per esensioni
* sostituire una superclasse con una sottoclasse non deve dare errori
* meglio pià interfacce singole che una complessa
* le astrazioni non devono dipendere dai dettagli

**clonable pattern**

è un design pattern dell'OOP, ogni superclasse definisce il metodo virtuale puro:
* virtual superclasse* clone() const = 0;

le sottoclassi andranno ad implementare questo metodo cambiandone il tipo di ritorno con la coercion

**esercizio**

```c++
#include <string>
#include <typeinfo> // per typeid

class fileaudio
{
    private:
        std::string titolo;
        double size;
    public:
        virtual fileaudio* clone() const = 0;
        virtual bool qualita() const = 0;
        virtual ~fileaudio() {};
        double Size()
        {
            return size;
        }
        virtual bool operator==(const fileaudio& f)
        {
            // uno dei pochi casi dove si deve usare typeid()
            return  typeid(*this) == typeid(f) && titolo == f.titolo && size == f.size;
        }
};

class mp3 : public fileaudio
{
    private:
        unsigned int bitrate;
    public:
        static unsigned int sogliaqualita;

        bool qualita() const
        {
            return bitrate >= sogliaqualita;
        }
        
        mp3* clone() const override
        {
            // l'implementazione è sempre questa
            return new wav(*this);
        }

        unsigned int Bitrate()
        {
            return bitrate;
        }

        bool operator==(const fileaudio& f) override
        {
            return fileaudio::operator==(f) && bitrate == static_cast<const mp3&>(f).Bitarte();
        }

};

class wav : public fileaudio
{
    private:
        unsigned int frequenza;
        bool lossless;
    public:
        static unsigned int sogliaqualita;
        bool qualita() const
        {
            return frequenza >= sogliaqualita;
        }
        wav* clone() const override
        {
            // l'implementazione è sempre questa
            return new mp3(*this);
        }

        bool Losseless()
        {
            return lossless;
        }

        bool operator==(const fileaudio& f) override
        {
            return fileaudio::operator==(f) && frequenza == static_cast<const mp3&>(f).Bitarate && lossless == static_cast<const mp3&>(f).Lossless();
        }
};

class izod
{
    private:
        class brano // wrapper
        {
            public:
                fileaudio* ptr;

                brano(fileaudio* p) : ptr(p->clone()) {}
                br
                brano(const brano& b) : ptr(b.ptr->clone()) {}

                brano& operator=(const brano& b)
                {
                    if(this != &b)
                    {
                        delete ptr;
                        ptr = b.ptr->clone();
                    }
                    return *this;
                }

                ~brano() 
                {
                    delete ptr;
                }
        };
        std::vector<brano> brani;

        public:
            std::vector<mp3> mp3(double dim, int br) const
            {
                std::vector<mp3> v;
                for(auto cit = brani.begin(); cit != brani.end(); ++cit)
                {
                    mp3* p = dynamic_cast<mp3*>(cit->ptr);
                    if(p && p->Size() >= dim && p->Bitarate() > br)
                        v.push_back(*p);
                }
                return p;
            }

            std::vector<fileaudio*> braniqualita() const
            {
                syd::vector<fileaudio*> v;
                for(auto cit = brani.begin(); cit != brani.end(); ++cit)
                {
                    if(((cit->ptr)->qualita()) && (fynamic_cast<wav*>(cit->ptr) == nulptr || static_cast(<wav*>(cit->ptr)->Losseless()))
                            v.push_back(cit->ptr);
                }
                return v;
            }

            void insert(mp3* p)
            {
                bool found;
                for(auto it = brani.begin(); !found && it != brani.end(); ++it)
                     if(*(it->ptr) == *p)
                        found = true;
                if(!found)
                    brani.push_back(p);
            }
};
```