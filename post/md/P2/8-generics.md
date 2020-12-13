
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

**esercizio template da esame**

```c++
/*
template di albero 3-ario con:
- costruttore di default
- gestione della memoria senza condivizione (deep copy = assegnazione, costruttore di copia, distruttore profonda)
- metodo void insert(const T&);
- metodo bool search(const T&);
- overloading operatore ==
- overloading operatore <<
*/

template<class T> class albero;

template<class T>
std::ostream& operator<<(std::ostream& os, const albero& a);

template<class T>
class albero
{
    friend std::ostream& operator<< <T> (std::ostream&, const albero&);
    private:
        class nodo
        {
            public:
                T info;
                nodo* sx, cx, dx;

                // l'unico valore di default possibile per un parametro di default è il costruttore di default del tipo
                nodo(const T& i = T(), nodo* s = 0, nodo* c = 0, nodo* d = 0) : info(i), sx(s), cx(c), dx(d) {}
        };
        nodo<T>* root;

        static nodo* copia(nodo* r)
        {
            if(!r) return nullptr;
            else return new nodo(r-> info, copia(r->sx), copia(r->cx), copia(r->dx));
        }

        static void distruggi(nodo* r)
        {
            if(r)
            {
                distruggi(r->sx);
                distruggi(r->cx);
                distruggi(r->dx);
                delete r;
            }
        }

        static bool search_rec(nodo* r, const T& t)
        {
            if(!r) return false;
            else return search_rec(r->sx, t) || search_rec(r->cx, t) || search_rec(r->dx, t);
        }

        static bool equal_rec(nodo* r1, nodo* r2)
        {
            if(!r1 && !r2) return true;
            if(!r1 || !r2) return false;

            return (r1->info == r2->info) && equal_rec(r1->sx, r2->sx) && equal_rec(r1->cx, r2->cx) && equal_rec(r1->dx, r2->dx);
        }

        static std::ostream& print_rec(nodo* r, std::ostream& os)
        {
            if(!r) return os;
            
            os << r->info << " "
            
            print_rec(r->sx, os);
            print_rec(r->cx, os);
            return print_rec(r->dx, os);
        }

    public:
        albero() : root(nullptr) {}

        albero(const T& a) : root(copia(a.root)) {}
        
        albero& operator=(const T& a)
        {
            if(this != &a)
            {
                root = copia(a.root);
                if(root) distruggi(root);
            }
            return *this;
        }

        ~albero()
        {
            if(root) distruggi(root);
        }

        void insert(const T& x)
        {
            nodo<T> aux =  root;
            root = new nodo(x, copia(root), copia(root), root)
        }

        bool search(const T& t) const
        {
            return search_rec(root, t);
        }

        bool operator==(const albero& a) const
        {
            return equal_rec(root, a.root);
        }
}

template<class T>
std::ostream& operator<<(std::ostream& os, const albero& a)
{
    return print_rec(os, a.root);
}
```

```c++
/*
completare Z in modo tale che il main non generi errori
*/

class Z
{
    public:
        int& operator++();
        int operator++(int);
        bool operator==(const Z&) const;
        // Z& operator=(const int&);
        Z(const int&);
    // da 
}

template<class T1, class T2=Z>
class C
{
    public:
        T1 z;
        T2* p;
};

template<class T1, class T2>
void foo(C<T1, T2>* q)
{
    ++(q->p):
    if(true == false) cout << ++(q->x);
    else cout << q->p;
    (q->x)++;
    if(*(q->p) == q->x) *(q->p) = q->x
    T1* ptr = &(q->x);
    T2* t2 = q->x;
}

int main()
{
    C<Z> c1;
    foo(&c1);
    C<int> c2;
    foo(&c2);
}

```