### Liste concatenate

di base sono strutture dati ricorsive.
* caso base --> lista vuota
* caso ricorsivo --> un elemento seguito dal resto della lista

le liste concatenate vengono implementate attraverso una struttura nodo, del tipo:

``` c++
struct nodo{
    int info;
    nodo* next;

    nodo(int i, nodo* n)
    {
        info = i;
        nodo = n;
    }
}
```

di base un nodo è una struttura dati che contiene un valore informativo ed un puntatore ad un nodo successivo.

una lista è quindi **un puntatore nodo\***, allocato sullo stack, che punta ad un nodo allocato sull'heap

``` c++
nodo* lista = NULL; // crea una lista vuota

lista = new nodo(0, NULL); // la lista ora punta ad un nodo
lista->next = new nodo(1, NULL); //il primo elemento ora punta al secondo elemento
lista->next->next = new nodo(1, NULL); // il secondo punta al terzo e così via
```

**liste ben formate**

una lista è ben formata/corretta se:
* se il nodo* punta a NULL
* se il nodo* punta ad una lista ben formata

di base una lista ben formata è quindi una lista di nodi, posibilmente vuota, il cui ultimo elemento punta a NULL

### Operazioni sulle liste

di base sono le operazioni base che una lista deve implementare:
* creazione di una lista di n nodi
* distruzione di una lista
* stampa degli elementi
* ricerca di un elemento
* inserimento di un elemento in una data posizione
* push
* pop
* ritornare la lunghezza
* concatenazione di 2 liste
* inversione della lista