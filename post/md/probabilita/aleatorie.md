### Variabili aleatorie

di base sono funzioni che vanno da omega in R e si indicano con lettere maiuscole (es. X, Y, Z...)

quindi è del tipo:
* X : omega --> R

una variabile aleatoria è caratterizzata da 2 cose:
* alfabeto
* densita discreta

caratterizzare una VA significa trovarne alfabeto e densita

**alfabeto**

è l'immagine della VA e si indica con X corsivo

**probabilità indotta sull'alfabeto**

si indica con:
* P<sup>X</sup>(x) = P(X<sup>-1</sup>(x))

indica la probabilità che la VA assuma un certo valore della sua immagine

questa probabilità è ovvimanete uguale alla probabilità che l'esito che la mappa si verfichi

**densita discreta**

si indica con P<sub>x</sub>(.)

è l'insieme di tutte le probabilità indotte dell'alfabeto

nb: la somma di tutte le probabilità deve essere == 1 essendo una misura di probabilità

**variabili aleatorie composte**

una funzione reale, applicata all'alfabeto di una VA, è una VA

di base è una normale composiione di funzioni

**variabilie aleatoria indicatrice**

detto anche 1 ciccione

si indica con 1<sub>E</sub>(omega), è una funzione particolare uguale a:
* 1 se omega piccolo appartiene ad E
* 0 altrimenti

---

### Informazioni Statistiche

**Valor medio**

si indica con:
* E(X) = x1P(x1) + x2P(x2) .. + xnP(xn) 

oppure:
* E(X) = X(o1)P(o1) --> teorema fondamentale inutile


proprietà:
* E(kX) == kE(X)
* E(X + Y) == E(X) + E(Y)
* se X(omega) >= 0 allora E(X) >= 0
* se E(X) >= E(Y) allora X >= Y
* inf X <= E(X) <= E(x)


**valor medio di funzioni composte**

dato una VA X e una funzione f, allora:
* E(f(X)) = f(x1)P(x1) + f(2)P(x2) .. + f(xn)P(xn) 

nb: è utile in quanto non bisogna calcolare la densità di f(X)

**varianza**

si indica con:
* Var(X)= (a1 - E(X))<sup>2</sup>P(a1)

oppure:
* var = E((X - E(X))<sup>2</sup>)

è un indice di dispersione che da informazioni su quanto l'alfabeto sia distribuito attorno al valor medio

proprietà:
* Var(X) sempre >= 0
    * vale 0 sse X è una VA costante
* Var(kX) = k<sup>2</sup>Var(X)
* Var(X + k) = Var(X)
* Var(X) = E(X<sup>2</sup>) - E(X)<sup>2</sup>

nb: non è una funzione lineare


**prove di bernoulli**

è un esperimento dove:
* ci sono n prove identiche di fila
* ogni prova ha solo 2 esiti, 0 e 1
* le prove sono indipendenti

**VA di bernoulli**

X ~ Be(p) con
* p nell'intervallo \[0,1\]

caratterizzazione:
* alfabeto {0, 1}
* densita:
    * P(1) = p
    * P(0) = 1 -p

info:
* E(X) = p
* Var(X) = p(1-p) 

~ si legge: è distribuito come

di base è una variabile aleatoria che associa 1 se l'esito ha successo, 0 altrimenti

il parametro p indica la probabilità di successo dell'evento


**distribuzione binomiale**

X ~ Bin(n,p) con 
* n appartenente ai naturali
* p nell'intervallo \[0,1\]

caratterizzazione:
* alfabeto: {0, 1, ... n}
* densita: 
    * P(k) = (n su k)p<sup>k</sup>(1-p)<sup>k</sup>

info:
* E(X) = np
* Var(X) = np(1-p) 

è un estensione della VA di bernoulli, di base applica n volte bernoulli e conta quanti esiti hanno avuto successo