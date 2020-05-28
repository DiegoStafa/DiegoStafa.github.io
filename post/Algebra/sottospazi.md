### Sottospazi di spazi vettoriali

sia V uno spazio vettoriale in R o C, allora U sottoinsieme di V si dice sottospazio vettoriale di V sse rispetta queste condizioni:
1. deve contenere il vettore nullo
2. se v1 e v2 appartengono a U allora v1+v2 deve appartenere a U
3. se v appartiene a U allora k\*v appartiene a U, con k scalare

nb: la prima condizione equivale a imporre che U sia non vuoto

di base un sottospazio vettoriale è uno spazio vettoriale

---

**spazio nullo di una matrice**

data una matrice A, si definisce lo spazio nullo N(A) come sottospazio vettoriale formato da vettori v tale per cui:
* Av = 0

si verifica che è uno spazio vettoriale facendo:
1. contiene il vettore nullo --> in quanto Av = 0 --> v = 0
2. la somma è interna all'insieme --> in quanto A(v1+v2) = 0 --> Av1 + Av2 = 0 --> 0 + 0 = 0
3. il prodotto scalare è interno all'insieme --> in quanto A(cv) = 0 --> c(Av) = 0 --> c(0) = 0

---

**insieme dei multipli**

per indicare l'insieme di tutti i multipli di un vettore v, si usa la notazione **\<v\>**

che di base significa kv, k scalare che varia in tutto il suo campo, e v un vettore scelto

l'insieme dei multipli è un sottospazio vettoriale, dato che:
* esiste il vettore nullo --> 0\*v
* la somma è interna --> v1+v2 --> cv + sv --> (c+s)v
* il prodotto scalare è interno --> kv1 == k\*(cv) == (kc)v

nb: v1 e v2 diventano i vettori v moltiplicati ad uno scalare per definizione di insieme dei multipli

l'insieme dei multipli ha 1 elemento se v == 0 e tanti quanti k se v != 0

non esistono sottospazi su campi R/C con un numero finito di elementi

**Combinazione lineare**

di base un a combinazione lineare è un espressione del tipo:
* a<sub>1</sub>v<sub>1</sub> + a<sub>2</sub>v<sub>2</sub> + a<sub>3</sub>v<sub>3</sub> + ... + a<sub>n</sub>v<sub>n</sub>

**sottospazio dei vettori v1,v2,...vn**

per ottenere l'insieme di tutte le combinazioni lineari possibili in un insieme di vettori, si fanno variare i parametri con tutti i loro possibili valori

questo insieme si indica <v<sub>1</sub>, v<sub>2</sub>, ... v<sub>n</sub>> ed è un sottospazio vettoriale, dato che:
* esiste il vettore nullo --> tutti i parametri == 0
* la somma è interna --> w + z è scrivibile come combinazione lineare degli stessi vettori di partenza --> si raccolgono i parametri dei vettori corrispondenti
* il prodotto scalare è interno --> kw =k(combinazione lineare) --> prop. distributiva è ancora una combinazione lineare

nb: l'insieme dei multipli è una particolare combi### Sistemi generatori

un sistema generatore è un una lista di vettori v1,v2..vn di uno spazio vettoriale V, tale per cui:

ogni vettore appartenente a V è ottenibile da una particolare combinazione lineare di v1,v2..vnnazione lineare dove si scegli solo un vettore, l'insieme dei multipli può anche essere chiamato sottospazio vettoriale di v

### Sistemi generatori (es. tipo)

un sistema generatore è un una lista di vettori v1,v2..vn di uno spazio vettoriale V, tale per cui:

ogni vettore appartenente a V è ottenibile da una particolare combinazione lineare di v1,v2..vn

se la lista di vettori è finita allora si dice che lo spazio vettoriale è **finitamente generabile**

---
viene chiesto di verificare se una lista di vettori è un sistema generatore, per farlo bisogna verficare che un generica matrice sia ottenibile da una combinazione lineare

si imposta l'equivalenza tra la generica matrice e la generica combinazione lineare, e si determina se l'equivalenza è vera

di base si risolve con un sistema lineare A = b, dove b è il vettore dei termini generici della matrice, mentre A è la matrice contenente le espressioni con i parametri, si determina a soluzione del sistema con un EG

si impone la condizione per le soluzioni del sistema sulla colonna b, se si trova che anche solo per un valore non ha soluzioni, allora non è un isstema generatore