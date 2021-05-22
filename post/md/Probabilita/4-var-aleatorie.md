**variabile aleatoria**

notazione:
* X : omega -> R è la VA
* o piccolo è l'input
* x piccolo è l'output
* l'insieme degli output/immagine della VA è detto alfabeto

**densità discreta**

è la probabilitò che P(X=k), cioà la probabilità che la VA assuma il valore k

per calcolarla è sufficente sommare le probabilità degli input che la verficano

**valor atteso di una VA discreta**

si indica con:
* E(X) = +++ x<sub>n</sub>Px(x<sub>n</sub>) 
* E(x) = +++ X(w)P(w)

è quindi la sommatoria degli output della VA per la probabilità di vedere xk 

proprietà dedotte:
* E(aX) = aE(X)
* E(X + Y) == E(X) + E(Y)
* se X >= 0 allora E(X) >= 0
* se E(X) >= E(Y) allora X >= Y
* inf X <= E(X) <= max X
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
* P(X=1) = p
* P(X=0) = 1-p

**VA di bernoulli**

data la probabilità di successo p di un evento in una prova di bernoulli:

X ~ Be(p) se:

alfabeto:
* X(o) = 1 se l'esito ha successo
* X(o) = 0 altrimenti

densità discreta:
* P(X=1) = p
* P(X=0) = 1 -p

caratteristiche:
* E(X) = p
* Var(X) = p(1-p) 

modella il verficarsi di un evento

**VA binomiale**

data la probabilità di successo p di un evento in una prova di bernoulli, ripetuta n volte:

X ~ Bin(n,p) se: 

alfabeto:
* X(o) = numeri di successi ottenuti
* [0,1,2 ... n]

densità discreta:
* P(X=k) = (n su k)p<sup>k</sup>(1-p)<sup>k</sup>

caratteristiche:
* E(X) = np
* Var(X) = np(1-p) 

modella il risultato della prova di bernoulli ripetuta n volte

**VA geometrica**

data la probabilità di successo p di un evento in una prova di bernoulli:

X ~ Ge(p), dove: 
* p nell'intervallo \[0,1\]

alfabeto:
* X(o) = numero di insuccessi prima di un successo
* [0,1,2 ... n]

densità discreta:
* P(X=k) = (1-p)p<sup>k-1</sup>p

caratteristiche:
* E(X) = 1/p
* Var(X) = (1-p)/p<sup>2</sup>

modella il primo successo dopo una serie di insucessi

**VA di Poisson**

data una variabile reale r:

X ~ Po(r) se: 

alfabeto:
* X(o) = quante volte l'esito ha probabilmente successo
* [0,1,2 ...]

densità discreta:
* P(X=k) = e<sup>-r</sup>r<sup>k</sup>/k!

caratteristiche:
* E(X) = r
* Var(X) = r

modella il numero di eventi per unità di tempo

**teorema limite di poisson**

una VA binomiale con n >> 1 e p << 1 (quindi tantissime prove dove ogni prova ha una bassa probabilità di successo) può essere approssimata con una VA di poisson con r=n-p

**vettori aleatori discreti**

è un vettore formato da n VA su uno stesso input

alfabeto:
* X x Y

densità discreta congiunta:
* P(X=xi,Y=yj)

proprietà:
* P(X=xi) = i+++ P(X=x,Y=yi)
* P(Y=yi) = i+++ P(X=xi,Y=y)

valor medio:
* E(g(X,Y)) = i+++ g(xi,yi)P(X=xi,Y=yi)
* E(XY) = i+++ j+++ xiyjP(X=xi.Y=yj)

**indipendenza di VA**

2 VA X ed Y sono indipendenti se:
* P(X=xi,Y=yj) = P(X=xi)P(Y=yj)

proprietà:
* X e Y indipendenti -> f(x) e g(y) indipendenti
* E(XY) = E(X)E(Y)
* Cov(X,Y) = 0 (proprietà di scorrelazione)
* Var(X + Y) = Var(X) + Var(Y)
    * Var(aX + bY + c) = a^2Var(X) + b^2Var(Y)
* indipendenza --> scorrelazione
* scorrelazione -/> indipendenza

**VA assolutamente continue**

è una VA che può assumere valori in tutto R

**densità continua**

è la probabilità che la VA assuma un valore in un intervallo a-b:
* P(a <= X <= B) = a $$$ b f(x)dx

proprietà:    
* f(x) sempre maggiore di 0
* f(x) può non essere continua
* -inf $$$ +inf f(x)dx == 1
* P(X=a) è sempre = 0
* f(a) indica uanta densità si concentra in un intorno di x=a 

**funzione di distribuzione**

* Fx(x) = P(X < x) = -inf $$$ x f(y)dy

si indica con Fx, indica la probabilità che P(X<=a), uindi si racava che:
* P(a <= X <= B) = P(X<=b) - P(X<=a)
* P(a <= X <= B) = Fx(b) - Fx(a)

proprietà:
* lim -> -inf Fx(x) = 0
* lim -> +inf Fx(x) = 1
* x <= y --> Fx(x) <= Fx(y)
* Fx(x) è continua
* F'x(x) = f(x)

**teorema**

data una VA X avente una funzione di distribuzione Fx ed una VA Y=g(X) con g(X) invertibile, allora è possibile trovare Fy e f(y):
* Fy(y) 
    * = P(Y < y)
    * = P(g(X) < y)
    * = P(X < g<sup>-1</sup>(y))
    * = Fx(g<sup>-1</sup>(y))
* f(y) 
    = F'y(y)
    = F'x(g<sup>-1</sup>(y))*g<sup>-1</sup>(y)

**valor medio di VA continue**

E(X) = -inf $$$ +inf xf(x)dx

proprietà:
* può non esistere
* ha le stesse proprietà della discreta
* E(g(x)) = -inf $$$ +inf g(x)F(x)dx 
    in particolare se g(x) = (x - E(x))<sup>2</sup> si ha la definizione di varianza

**varianza di VA continue**

Var(X) = E(X<sup>2</sup>) - E<sup>2</sup>(X)

tutte le proprietà sulla varianza sono uguali 

**VA continue uniformi**

data un intervallo a-b

X ~ U(a,b) se ha: 

densità continua:
* fx(x) =
    * 1/(b-a) se a <= x <= b
    * 0 altrimenti
    
funzione di distribuzione:
* Fx(x) =
    * 0 se x < a
    * (x-a)/(b-a) se a <= x <= b
    * 1 se x > b

caratteristiche:
* E(X) = (b+a)/2
* Var(X) = (b-a)<sup>2</sup>/12 

**VA continue esponenziali**

data un numero lambda l positivo

X ~ Exp(l) se ha: 

alfabeto:
* X(o) = sta nell'intervallo a-b

densità continua:
* fx(x) =
    * le<sup>-lx</sup> se  x >= 0
    * 0 altrimenti
 
funzione di distribuzione:
* Fx(x) =
    * 1-e<sup>-lx</sup> se x >= 0
    * 0  altrimenti

caratteristiche:
* E(X) = 1/l
* Var(X) = 1/l<sup>2</sup>
 
modella il tempo di attesa tra 2 eventi

**assenza di memoria**

è una proprieta unica della VA esponenziale:
* P(X > T+t | X > T) = P(X > T)

**VA gaussiana**

dati la media mi e la deviazione standard s, con s != 0, allora:

X ~ N(mi, s<sup>2</sup>)

densità continua:
* fx(x) = 1/rad(1\*pi\*r<sup>2</sup>) \* e<sup>(x-mi)<sup>2</sup>/2s<sup>2</sup></sup>

funzione di distribuzione:
* non calcolabile analiticamente

caratteristiche:
* E(X) = mi
* Var(X) = s<sup>2</sup>

modella 

**VA gaussiana affine (combinazione lineare)**

due VA gaussiane X e Y si possono sempre combinare in particolare:

se Y = aX + b, allora:

Y ~ N(a\*mi + b, a<sup>2</sup>s</sup>2</sup>)

densità continua:
* fy(y) = 1/a \* fx(y-b/a)

funzione di distribuzione:
* Fy(y) = Fx(y-b/a)

caratteristiche:
* E(Y) = a\*mi + b
* Var(Y) = a<sup>2</sup>s<sup>2</sup>

in particolare la distribuzione di una combinazione lineare gaussiana è gaussiana

**VA gaussiana centrata standard**

si indica con Z la VA centrata gaussiana quando:
* Z = (X - mi) / s

funzione di distribuzione (che si indica sempre con fi)
* -inf $$$ z 1/rad(2\*pi) \* e<sup>-x<sup>2</sup>/2</sup>dx

caratteristiche:
* E(Z) = 0
* Var(Z) = 1

NB: ogni VA gaussiana si può trasformare in gaussiana centrata standard attraverso la formula

es.

una scatola con una capsula da ~250 g di media
* calcolare dev standard sapendo che il 5% delle capsule pesa più di 252g
* calcolare P che una capsula pesi meno di 245g

X ~ N(250, s^2)

1)

P(X > 252) = 0.05

--> P((X - 250)/s > (252-250)/s)

--> P(Z > 2/s)

--> 2/s = valore tabulato di Z (se ci sono più valori tabulati si fa la media)

2)

P(X < 245) e si rifa la stessa cosa, ma adesso si ha s

## Teoremi limite

**legge dei grandi numeri**


* X<sub>i</sub> è una VA che rappresenta l'esito dell'iesima prova
* la successione (X<sub>i</sub>)<sub>i</sub> rappresenta una successione di VA indipendenti
* E(X<sub>i</sub>) = mi

per ogni epilon > 0 si ha che:
* lim P(|Xn - mi| <= epsilon) = 1

corollario:
* data una una funzione g(x) tale per cui:
    * E(g(xi)) < +inf
* allora:
    * lim P(|Xn - mi| <= epsilon) = 1


**teorema del limite centrale**

funziona solo con VA gaussiane,