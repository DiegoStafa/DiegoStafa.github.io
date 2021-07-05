# Programmazione dinamica

consiste nel risolvere solitamente problemi di ottimizzazione, per far cioò bisogna:
* dimostrare che la soluzione è data dalla soluzione ottimale dei sottoproblemi
* usare memoizzazione o tabulùazione per risolvere il problema

**approccio risolutivo**

bisogna determinare cosa il problema richiede, ed esprimere questo problema come qualcosa + la soluzione del sottoproblema

**memoizzazione (top-down)**

è l'approccio ricorsivo, risolve il sottoproblema più vicino al problema risolvendo i sottoproblemi

**tabulazione (bottom-up)**

è l'apporccio iterativo, risolve tutti i sottoproblemi più piccoli fino ad arrivare alla soluzione del problema iniziale

**taglio delle aste**

consiste nel determinare come tagliare un'asta lunga n in p parti sapendo che parti di diversa lunghezza hanno un valore diverso, per ottenere il massimo guadagno

```
// senza memoizzazione, complessità O(2^n)

cutrod(p, n)
    if(n = 0)
        return 0
    else
        value = -1
        per i da 1 a n
            value = max(value, p[i] + cutrod(p, n-1))
        return value


// con memoizzazione, complessità O(n^2)

memoized-cutrod(p, n)
    cache[0..n] = -1
    return cutrod-aux(p, n, cache)

cutrod-aux(p, n, cache)
    if(cache[n] > 0)
        return cache[n]
    // cutrod
    if(n = 0)
        value = 0
    else
        value = -1
        per i da 1 a n
            value = max(value, p[i] + cutrod(p, n-1))
        cache[n] = value
    // cutrod
    return value

/*
- per ogni lunghezza calcola tutti i possibili tagli e ne prende il migliore
*/
```

**sottosequenza più lunga**

date 2 parole X,Y consiste nel determinare la sottosequnza S più lunga che appartiene ad entrambe

sottostruttura ottimale:
* se gli ultimi elementi di X,Y sono uguali allora appartengono a S e si eliminano da X,Y e si riesegue da qui
* se sono diversi, allora l'ultimo o di X o Y non appartiene a S, e si riesegue il problema per entrambe le possibilità

**programmazione greedy**

è un sottoinsieme della programmazione dinamica, usa la soluzione ottimale dei sottoproblemi e dimostra che queste portano alla soluzione globale

**correttezza e dimostrazioni**

* indica con A la soluzione dell'algoritmo
* indica con O la soluzione ottimale del problema
* assumi che A != O e trova una differenza tra le 2 soluzioni
* dimostra che sistemando le differenze la soluzione ottimale non cambia
    * spiega perchè A ed O sono differenti

**selezione attività**

definizione del problema:
* n attività con tempo inizio-fine
* tempo totale T
* trovare l'ordinamento con più attività non accavallate

soluzione greedy:
* scegli l'attività che finisce prima
* ricorsione fino a che non esaurisci T

**codici di huffmann**

è una tecnicna di compressione:
* si ricavano le frequenze dei simboli
* si crea un albero tc la somma delle frequenze sia la minore


es:
* f5, e9, c12, b13, d16, a45
* si prendono i 2 numeri più bassi, si sommano e sis crea l'albero
    * 14
        * sx : 0-f5
        * dx : 1-e9
* si aggiunge il 14 e si rimuove 5,9 dalla lista e si ricomincia