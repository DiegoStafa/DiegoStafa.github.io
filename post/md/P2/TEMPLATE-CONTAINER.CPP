#include <iostream>

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
