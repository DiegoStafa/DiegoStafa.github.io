### Principio fondamentale del conteggio

se in un insieme ogni elemento è individuabile univocamente da ka scelte di n esiti possibili, allora la cardinalità dell'insieme è:
* \|E\| = n<sub>1</sub>n<sub>2</sub>...n<sub>k</sub>

mazzo di carte:
* 4 semi
* 13 valori

il numero di carte del mazzo è 4x13

il principio di conteggio vale **SSE** ogni elemento è individuabile univocamente

quindi se 2 distinte sequenze di scelte danno risultati uguali non vale il PFC

### Disposizioni

indica un vettore (quindi ordinato) di k elementi, con o senza elementi ripetuti

**Disposizioni con ripetizioni**

siccome le ripetizioni sono ammesse si sceglie tra n elementi, k volte
* n<sup>k</sup>

da cui
* il numero di possibili sottoinsiemi di un insieme di k elementi è:
* 2<sup>k</sup>

si nota facilemente associando ad ogni elemento 0 o 1 se presente nel sottoinsieme --> 2<sup>k</sup>

**Disposizioni senza ripetizioni**

le ripetizioni non sono ammesse, quindi ad ogni scelta si rimuove un elemento dalla scelta, questo procedimento si fa k volte, quindi:
* n(n-1)(n-2)...(n-k+1)

se k = n la disposizione prende il nome di permutazione

### Combinazioni

indica sottoinsieme (quindi NON ordinato) di k elementi, con o senza elementi ripetuti

**Combinazioni con ripetizioni**

di base si contano le disposizioni e si tologono quelle che senza ordinamento risultano uguali
* n!/k!(n-k)! (coeff. binomiale n su k)


**relazione tra disposizione e  z combinazione**

siccome manca la condizione di ordine, il numero di combinazioni è SEMPRE minore di quello delle disposizioni

nelle disposizioni è come se ad ogni elemento del vettore venga assegnata una posizione quindi (nel caso di un alfabeto) se si scelgono 5 lettere, u2 possibili disposizioni sono:
* A1, A2, A3, T4, v%
* A1, A2, A3, T4, v%

nel caso delle combinazioni manca l'indice di ordinamento, quindi quelle 2 sono uguali