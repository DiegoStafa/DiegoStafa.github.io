## Offerta formativa

- Fondamenti
    Analisi dettagliata di InsertSort: Pseudocodice.
    Calcolo diretto del tempo calcolo in funzione di n.
    Tasso di crescita e notazione asintotica.
    L'algoritmo MergeSort e la tecnica divide et impera.
    Analisi della complessità di MergeSort. 
    Soluzione delle ricorrenze. 
    Il teorema dell'esperto.
    QuickSort.
    Complessità media di QuickSort e analisi probabilistica.
    Randomizzazione di QuickSort.

- Ordinamento e Statistiche d'Ordine
    HeapSort e sua analisi.
    Limite inferiore per la complessità degli algoritmi di ordinamento.
    Implementazione di code con priorità mediante heap.
    Ordinamento in tempo lineare.
    Algoritmi CountingSort e RadixSort.

- Strutture Dati
    Tavole hash.
    Alberi binari di ricerca.
    Alberi rosso-neri.
    Aumento di strutture dati.
    Teorema dell'aumento per alberi rosso-neri.
    Alberi di intervalli.

- Tecniche avanzate di progettazione e analisi
    Programmazione dinamica.
    Algoritmi golosi.
    Analisi ammortizzata.

**Insertion sort**

caratteristiche:
* alg. incrememntale
* complessità n<sup>2</sup>

insertion sort(A):
* n = A.lenght
* for j = 2 to n
    * key = A\[j\]
    * i = j-1
    * while (i > 0) and (A\[i\] > key)
        * A\[i+1\] = A\[i\]
        * i-- 
    * A\[i+1\] = key

correttezza:
* ciclo for
    * A\[1 .. j-1\] è ordinato
* ciclo while
    * A\[1 .. i\] e A\[i+2 .. j\] sono ordinati
    * A\[i+2-j\] > key

analisi:
* ogni istruzione elementare si esegue in un tempo costante
* ogni ciclo si esegue in un tempo lineare
