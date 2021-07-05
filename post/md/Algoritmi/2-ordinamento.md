# Algoritmi di ordinamento

**insertion sort**

ha complessità O(n^2), sposta a sinistra un elemento finchè non trova qualcosa di più piccolo, lo fa per ogni elemento

```
insertion sort(V):
    i = 1
    while i < V.length
        j = i
        while j > 0 and A[j-1] > A[j]
            swap(A[j], A[j-1])
            j--
        i++
```


**merge sort**

ha complessità 𝛩(nlogn), è un algoritmo ricorsivo di tipo divide et impera, all'andata divide l'array, al ritorno lo ordina

```
mergesort(V, inizio, fine):
    se inizio < fine
        metà = (inizio+fine)/2
        mergesort(V, inizio, metà)
        mergesort(V, metà+1, fine)
        merge(V, inizio, metà, fine)

merge(V, inizio, metà, fine):
    L = V.split(inizio, metà)
    R = V.split(metà+1, fine)
    i=j=1
    per k da inizio a fine
        se L[i] <= R[j]
            V[k] = L[i]
            i++
        altrimenti
            V[i] = R[j]
            j++
```

**max heap**

il max heap è un albero binario nella quale ogni nodo è maggiore dei propri figli, un vettore è un albero binario nella quale ogni elemento di indice i (1 <= i <= metà-vettore) ha come figli quelli di indici 2i e 2i+1, nello stesso modo un vettore è un max heap quando ogni elemento di indice i è quindi maggiore di quelli di indice 2i e 2i+1

si può sempre trasformare un vettore in max-heap tramite il procedimento di max-heapify che scambia degli elementi per renderlo conforme alla definizione di max heap

proprietà max-heap:
* il primo elemento è sempre il più grande
* metà vettore è composto da nodi, l'altra metà da foglie

```
max-heapify(V, i):
    max = i
    se V[2i] > V[max]
        max =  2i
    se V[2i+1] > V[max]
        max = 2i+1
    se max != pos
        swap(V[max], V[pos])
        max-heapify(V, max)

/*
swappa il nodo nodo con i figli finchè i figli non sono minori del nodo
*/

```

**min heap**

come un max heap ma ogni nodo è minori dei propri figli

**heap sort**

ha complessità 𝛩(nlogn), trasforma il vettore in un max heap e siccome la radice è sempre il numero più grande del vettore, lo sposta in fondo (parte ordinata)

si suppone che V abbia i seguenti metodi:
* length --> lunghezza del vettore
* heapsize --> lunghezza del vettore da considerarsi come heap

```
buildMaxHeap(V)
    per i da V.length/2 a 1
        max-heapify(V,i)

heapsort(V)
    buildMaxHeap(V)
    per i da V.length a 2
        swap(V[1], v[i])
        V.heapsize--
        max-heapify(V, 1)
```

**quick sort**

ha complessità 𝛩(nlogn), è un algoritmo ricorsivo di tipo divide et impera, fissato un elemento del vettore (pivot):
* a sinistra mette tutti gli elementi minori o uguali del pivot
* a destra quelli maggiori

quindi la situazione è:
* S1 <= pivot < S2

per ordinare S1 ed S2 si riutilizza il quicksort ed alla fine si uniranno tutti i pezzi ordinati


```
quicksort(V, inizio, fine)
    se inizio < fine
        q = partition(V, inizio, fine) // indice di rottura
        quicksort(V, inizio, q-1) // S1
        quicksort(V, q+1, fine) // S2

partition(V, inizio. fine)
    pivot = V[inizio]
    i = inizio - 1
    j = fine + 1
    while
        while V[i] < pivot // controlla da sx
            i++
        while V[j] > pivot // controlla da dx
            j--
        se i != j // termina quando si incontrano
            swap(V[i], V[j])
        altrimenti
            esci
    return i // separa quelli minori e maggiori del pivot
```

**counting sort**

ha complessità 𝛩(n+k) ed è oneroso in termini di spazio, 
si può utilizzare solo se si conosce il range di valori del vettore 0...k

si basa sul fatto che se per ogni elemento so quanti ce ne sono di più piccoli, allora so anche dove mettere quell'elemento

```
countingsort(V, out, k)
    count[0..k] = 0
    per i da 1 a V.length
        count[V[i]]++
    per i da 1 a k
        count[i] += count[i-1]

/* reverse counting sort
    per i da k-1 a 0
        count[i] += count[i+1]
*/    
    per i da V.length a 1
        out[count[V[i]]] = V[i]
        count[V[i]]--
```