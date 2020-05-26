### Matrici

concetti base:
* sono tabelle di numeri (coefficenti della matrice)
* sono identificate da una lettera latina maiuscola
* righe e colonne partono da 1
* per rifersi al generico elemento a in posizione i,j della matrice di m righe e n colonne si scrive:
- (a<sub>ij</sub>), m x n
* la matrice identica è la matrice con righe == colonne e tutti 1 in diagonale

---

**prodotto scalare**

di base è moltiplicare una matrice per un numero, si moltiplica ogni coefficente della matrice per lo scalare.

data la matrice A: 
* 0 svuota la matrice (A diventa una matrice a coefficenti == 0)
* 1 è l'elemento neutro
* tutto il resto moltiplica normalmente

**somma tra matrici**

la somma tra matrici si può fare solo con matrici dallo stesso numero di righe e colonne, si sommano i coefficenti di egual posizione.

data la matrice A: 
* -A svuota la matrice
* \[\|\|\] elemento neutro
* tutto il resto somma normalmente

**prodotto riga per colonna**

definizioni base:
* matrici di una colonna sola sono detti vettori colonna (indicato da una lettera latina minuscola e sottolineata)
* matrici di una riga sola sono detti vettori riga (indicata allo stesso modo ma con una t in alto a destra)

il prodotto riga per colonna è definito solo se le 2 vettori hanno la stessa lunghezza, ritorna uno scalare

nb: la legge di cancellazione non vale, u\*v<sup>t</sup> = 0 non implica che uno dei due vettori sia uguale a 0

**prodotto tra matrici**

data la matrice A<sub>nxm</sub> e la matrice B<sub>ixj</sub>: 
* il prodotto è definito sse m == i
* la matrice risultante è C<sub>nxj</sub>
* i coefficenti C in posizione generica (n,j) sono calcolati facendo il prodotto della riga n di A e la colonna j di B

di base se si vuole calcolare il coefficente in posizione (3,4) si moltiplica la riga 3 di A con la colonna 4 di B

data la matrice A e supposte le condizioni di esistenza del prodotto: 
* la matrice vuota ritorna una matrice vuota
* la matrice identica è l'elemento neutro
* A\*B != B*\A
* non vale la legge di cancellazione

### operatori unari

di base operatori che si applicano ad una matrice e la moodificano:
* trasposizione
* coniugio
* h-trasposizione

**trasposizione di una matrice**

la trasposta della matrice A<sub>nxm</sub> è B<sub>mxn</sub>, i coefficenti B in posizione generica (m,n) sono i coefficenti A in posizione generica (n,m)

si indica con: A<sup>T</sup>

proprietà:
* (A<sup>T</sup>)<sup>T</sup> == A
* (k\*A)<sup>T</sup> == k\*A<sup>T</sup>
* (A + B)<sup>T</sup> == A<sup>T</sup> + B<sup>T</sup>
* (A\*B)<sup>T</sup> == B<sup>T</sup>\*A<sup>T</sup>
* A è una matrice simmetrica se A == A<sup>T</sup> --> implica A è quadrata
* A è una matrice antisimmetrica se A != A<sup>T</sup> --> implica A è quadrata

**coniugio di una matrice**

la coniugata della matrice A<sub>nxm</sub> è B<sub>nxm</sub>, i coefficenti B in posizione generica (n,m) sono i coefficenti A in posizione generica (n,m) coniugati

nb: il coniugato di un numero reale è il numero reale stesso, il coniugato di un complesso è il numero complesso opposto, il coniugato di una somma algebrica complessa si ricava dalle queste 2 regole base

si indica con una barra sopra il nome della matrice

proprietà:
* il coniugato del coniugato di A è A
* il coniugato di uno scalare per una matrice è il coniugato dello scalare per il coniugato della matrice
* il coniugato della somma tra due matrici è la somma dei coniugati delle due matrici
* il coniugato del prodotto tra due matrici è il prodotto dei coniugati delle due matrici


**H-trasposizione di una matrice**

di base significa fare sia una trasposizione sia una coniugazione della stessa matrice (o viceversa, prima coniugazione e poi trasposizione)

si indica con: A<sup>H</sup>

proprietà:

* (A<sup>H</sup>)<sup>H</sup> == A
* (k\*A\)<sup>H</sup> == k coniugato \* A<sup>H</sup>
* (A + B)<sup>H</sup> == A<sup>H</sup> + B<sup>H</sup>
* (A\*B)<sup>H</sup> == B<sup>H</sup>\*A<sup>H</sup>
* A è una matrice hermitiana se A == A<sup>H</sup> --> implica A è quadrata
* A è una matrice antihermitiana se A != A<sup>T</sup> --> implica A è quadrata

---

### notazioni

* M<sub>nxm</sub>(R/C) indica una generica matrice reale/complessa
* M<sub>n</sub>(R/C) indica una generica matrice quadrata reale/complessa, n indica il grado della matrice
* i coefficenti di una matrice che risiedono nella diagonale sono detti coefficenti diagonali
* A = diag(d1, d2 .. dn) indica una matrice diagonale, una matrice è detta diagonale se:
    - è quadrata
    - i coefficenti non diagonali sono == 0
* una matrice scalare è una matrice identica moltiplicata per uno scalare
* C/R<sup>n</sup> indica l'insieme dei vettori colonna di n righe
* C/R<sub>n</sub> indica l'insieme dei vettori riga di n righe
* un vettore coordinato contiene tutti 0, ed un 1 nella posizione i
* e<sub>i</sub> indica un vettore colonna coordinato di lunghezza non specificata