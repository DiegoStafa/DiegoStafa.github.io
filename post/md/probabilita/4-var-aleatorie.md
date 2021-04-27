**variabile aleatoria**

notazione:
* X : omega -> R è la VA
* o piccolo è l'input
* x piccolo è l'output
* l'insieme degli output/immagine della VA è detto alfabeto

**funzione di massa probabilità**

Px(k) indica la probabilità X(o) = k

è una funzione che mappa ogni output ad una probabilità, per calcolare la probabilità che un certo output si verifichi è sufficente sommare le probabilità degli input che la verficano

la funzione di massa probabilità è una funzione di probabilità e ne rispetta le condizioni

**valor atteso di una VA**

si indica con:
* E(X) = +++ x<sub>n</sub>Px(x<sub>n</sub>) 
* E(x) = +++ X(w)P(w)

è quindi la sommatoria degli output della VA per la probabilità di vedere xk 

proprietà dedotte:
* linearità
    * E(aX) = aE(X)
    * E(X + Y) == E(X) + E(Y)
* positività
    * se X >= 0 allora E(X) >= 0
* monotonia
    * se E(X) >= E(Y) allora X >= Y
* limitatezza
    * inf X <= E(X) <= max X
* composizione
    * E(f(X)) = f(x1)P(x1) + f(2)P(x2) + .. + f(xn)P(xn) 

**varianza**

è un numero positivo che indica quanto l'alfabeto sia distribuito attorno al valor medio

si indica con:
* Var(X) = (a1 - E(X))<sup>2</sup>P(a1)
* Var(X) = E((X - E(X))<sup>2</sup>)

proprietà:
* Var(X) sempre >= 0
    * vale 0 sse X è una VA costante
* Var(aX) = a<sup>2</sup>Var(X)
* Var(X + a) = Var(X)
* Var(X) = E(X<sup>2</sup>) - E(X)<sup>2</sup>
* Var(X + Y) = Var(X) + Var(Y) + 2Cov(X,Y)

**covarianza**

si indica con:
* Cov(X,Y) = E(X-E(X)(Y-E(Y)))

proprietà:
* Cov(X,X) = Var(X)

**famiglie di VA**

sono VA la stessa funzione di massa probabilità

**VA indicatrice**

I : omega -> \[0, 1\], dove:
* I(o) = 1 se o appartiene ad omega
* I(o) = 0 altrimenti

funzione di massa probabilità:
* Px(1) = p
* Px(0) = 1-p

**VA di bernoulli**

data la probabilità di successo p di un evento in una prova di bernoulli:

X ~ Be(p) se:

alfabeto:
* X(o) = 1 se l'esito ha successo
* X(o) = 0 altrimenti

funzione di massa probabilità:
* Px(1) = p
* Px(0) = 1 -p

proprietà:
* E(X) = p
* Var(X) = p(1-p) 

risponde alla domanda: qual è la probabilità che un evento si verfichi?

**VA binomiale**

data la probabilità di successo p di un evento in una prova di bernoulli, ripetuta n volte:

X ~ Bin(n,p) se: 

alfabeto:
* X(o) = numeri di successi ottenuti
* [0,1,2 ... n]

funzione di massa probabilità: 
* Px(k) = (n su k)p<sup>k</sup>(1-p)<sup>k</sup>

proprietà:
* E(X) = np
* Var(X) = np(1-p) 

**VA geometrica**

data la probabilità di successo p di un evento in una prova di bernoulli:

X ~ Ge(p), dove: 
* p nell'intervallo \[0,1\]

alfabeto:
* X(o) = numero di insuccessi prima di un successo
* [0,1,2 ... n]

funzione di massa probabilità: 
* P(k) = (1-p)p<sup>k-1</sup>p

proprietà:
* E(X) = 1/p
* Var(X) = (1-p)/p<sup>2</sup>

**VA di Poisson**

data una variabile reale r:

X ~ Po(r) se: 

alfabeto:
* X(o) = quante volte l'esito ha probabilmente successo
* [0,1,2 ...]

funzione di massa probabilità: 
* P(k) = e<sup>-r</sup>r<sup>k</sup>/k!

proprietà:
* E(X) = r
* Var(X) = r

**teorema limite di poisson**

una VA binomiale con n >> 1 e p << 1 (quindi tantissime prove dove ogni prova ha una bassa probabilità di successo) può essere approssimata con una VA di poisson con r=n-p

**vettori aleatori discreti**

è un vettore formato da n VA su uno stesso input

alfabeto:
* X x Y

funzione di massa probabilità congiunta:
* Pxy(xi,yj)

proprietà:
* Px(xi) = i+++ Pxy(x,yi)
* Py(yi) = i+++ Pxy(xi,y)

valor medio:
* E(g(X,Y)) = i+++ g(xi,yi)Pxy(xi,yi)
* E(XY) = i+++ j+++ xiyjPxy(xi.xj)