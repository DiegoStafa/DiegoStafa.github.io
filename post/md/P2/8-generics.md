
## Generic programming

consentono programmazione generica, cioè avere un unico codice per diversi tipi di dato, il tipo di dato diventa un parametro

l'implementazione della programmazione generica è fatta dai:
* generics nei moderni linguaggi
* templates nel c++

**template di funzione**

i templati sono porzioni di codice non compilabile che parametrizzano i dei tipi

sintassi template:
```c++
template <class T> // oppure <typename T>
T min(T a, T b)
{
    return a < b ? a : b;
}

// <class T> è la lista dei parametri di tipo
```

un template può essere istanziato (aka creato con un determinato tipo) in 2 modi:
* istanziazione implicita --> algoritmo di deduzione degli argomenti
* istanziazione esplicita

```c++
int main()
{
    int i, j, k;
    orario r, s, t;

    /* il tipo del template viene istanziato implicitamente
       attraverso il tipo dei parametri attuali */
    k = min(i, j); // T diventa un int
    t = min(r, s); // T diventa un orario

    /* il tipo del template viene istanziato eslicitamente
       attraverso le parentesi angoloate */
    k = min<int>(i, j);
    t = min<orario>(r, s);
}
```

algoritmo di deduzione degli argomenti:
1. si esaminano i tipi dei parametri attuali
2. se 2 o più parametri attuali che corrispondono allo stesso parametro di tipo hanno tipo diverso c'è un errore di istanziazione
    * le uniche conversoni ammesse sono (anche combinabili tra loro):
    * T& --> T
    * T[] --> T*
    * T --> const T
    * T --> const T&

nell'istanziazione esplicita del template si applicano tutte le conversioni implicite dei paramentri attuali

parametri valore:
```c++
template <class T, int size>
T min(T (&a)[size])
{
    // ...
}
```

problemi dei template:
* non hanno information hiding
* possono essere istanziati gli stessi template più volte
    * risolvibile dichiarando esplicitamente l'istanziazione,
    si dichiarno in un file a parte i template espliciti che si vogliono, ed il compilatore non andrà a compilare più volte lo stesso template (compilazione per inclusione)


**template di classe**

come nei template di funzione i template di classe  creano parametri di tipo per generalizzare una classe

i campi statici di un template di classe non sono condivisi tra diverse istanze in quanto le classi istanziate di un template sono classi effettivamente diverse l'una dall'altra, i campi statici vengono allocati solo quando utilizzati

```c++
// sintassi template di classe

template <class T>
class queue{
    public:
        queue();
        ~queue();
    private:
    // ...
}
```

i template di classe si possono istanziare in 2 modi:
* istanziazione di default
* istanziazione esplicita

l'istanziazione implicita non esiste in quanto non esistono parametri attuali di una classe

```c++
template <class T = int, size = 1024>
class buffer{
    // ...
}
 
// istanziazione di default
buffer<> bufferDefault; // diventa un buffer con i tipi di default specificati
buffer<string> bufferStrings; //diventa un buffer di stringhe con size di default

//istanziazioni esplicite
buffer<int,2048> bufferInteri;
buffer<bolletta,50> bufferBollette;
buffer<orario,90> bufferOrari;
```

**forward declaration**

di base consiste nel dichiarare la firma di una funzione/classe generica

```
template <class T> class queue;
```

**modello di utilizzo dei template**

una normale organizzazione dei template è la seguente:
* 1 o più file per i template 
* i source file che includono i template

con questo modello si includono tutti i template di classe e funzione, ma vengono compilati ed istanziati solo quelli che vengono effettivamente utilizzati

**amicizie tra template**

esistono 3 tipi di amicize:
* tra template di classe e funzioni/classi
* tra template di classe e template (associata)
* tra template di classe e template (non associata)

```c++
/* amicizia tra template e classe/funzione

in questo caso A, foo e boo possono accedere alla parte privata di C
*/

template<T> class C{
    friend class A;
    friend int foo();
    friend int A::boo();
    public:
        // ...
    private:
        // ...
}

/* amicizia tra template e template

in questo caso C da l'amicizia solo ai template di classe/funzioni specificati
*/

template<T1, T2, T3> class C{
    friend class A<T1, T2>;
    friend int foo<T3>();
    friend int A::boo<T1>(const C<T3>&);
    public:
        // ...
    private:
        // ...
}

/* amicizia tra template e template non associata

in questo caso C da l'amaicizia a qualsiasi istanza di a, foo e boo
*/

template<T> class C{
    template<class Tp>
    friend class A<Tp>;
    
    template<class Tp>    
    friend int foo<Tp>();
    
    template<class Tp>
    friend int A::boo(C<Tp>);
    public:
        // ...
    private:
        // ...
}
```

**template annidati**

si possono annidare i template di classe come classi normali, in questo caso:
* la classe annidata ha accesso alla parte privata della classe che annida
* la classe che annida non ha accesso alla parte privata della classe annidata

siccome il parametro di tipo è disponibile ovunque all'interno della template, quando si prova ad annidare una normale classe questa diventa un template di classe in quanto ha accesso al parametro di tipo

```c++
template <class T>
class queue
{
    private:
        // template di classe annidato associato
        class queueItem
        {
            public:
                queueItem(const T& val);
                T info;
                queueItem* next;
        };

        public:

        // template di classe annifato non associato
        template<class U>
        class quaqua
        {
            private:
                // ...
            public:
                // ...
        }
        
        // template di metodo di istanza non associato
        template<class U>
        void foo()
        {
            // ...
        }
}
```

nel caso dei template i tipi di classe annidate sono detti tipi impliciti, i tipi impliciti devono essere preceduti dalla keyword typename se dichiarati all'esterno della classe, 

```c++
typename C<T>::D // se D è un tipo implicito

typename C<T>::template E<int> // se E è un template implicito

// sta roba non serve è stata solo menzionata
```