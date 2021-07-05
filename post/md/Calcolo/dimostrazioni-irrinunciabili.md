**1 - precisione macchina max errore dei floating point**

ipotesi:
* x è un reale
* fl(x) è il reale macchina di x
* b è la base

tesi:
* |x - fl(x)| / |x| <= (b^1-t) / 2

dimostrazione:
* x = sign(x)(0,d0d1...dp)*b^p
* fl(x) = sign(x)(x,d0d1...dt')*b^p con dt' =
    * dt se il suo successivo < b/2
    * dt + 1 altrimenti

* stimo il numeratore:
    * |x - fl(x)| = b^p|(0,d0d1...dp) - (0,d0d1...dt')|
    * l'errore di arrotodamento è di 1/2b^t
    * quindi |x - fl(x)| <= 1/2b^t * b^p = (b^p-t)/2

* stimo il denominatore
    * 1/|x| <= max
    * |x| >= min
    * |x| >= b^-1*b^p
    * |x| >= b^p-1
    * 1/|x| <= b^1-p

* verifico le disuguaglianze
    * (b^p-t)/2 *  b^1-p = (b^1-t) / 2 --> precisione macchina

**2 - stabilità aritmetica macchina**

moltiplicazione:
* exy = |xy - x'y'| / |xy|
* = |xy - x'y + x'y -x'y'| / |xy| --> aggiungo e sottraggo x'y
* = |y(x - x') + x'(y-y')| / |xy| --> raccolgo
* < ||y(x - x')| + |x(y - y')'|| / |xy| --> disuguaglianza triangolare
* < |y(x - xì)| / |xy| + |x'(y - y')| / |xy| --> spezzo
* < ex + (x'/x)ey --> semplifico
* è stabile in quanto il rapporto x'/x va ad 1

reciproco --> divisione:
* e1/y = |1/y - 1/y'| / |1/y|
* = |y||(y - y')/yy'|
* = |y|/|y'| * |y-y'|/|y|
* = y/y' * ey
* è stabile in quanto il rapporto y/y' va ad 1

somma algebrica:
* ex+y = |(x+y) - (x' + y')| / |x + y|
* = | x - x' + y - y'| / |x + y|
* = |x-x'|/|x+y| + |y-y'|/|x+y|
* = |x|/|x+y| * |x-x'|/|x| + |y|/|x+y| * |y-y'|/|y| --> moltiplico e divido per |x| e spezzo
* =   |x|/|x+y| * ex + |y|/|x+y| * ey --> stabile solo se x,y concordi

**3 - convergenza bisezione**

tesi:
* l'errore del bisezione converge a 0

dimostrazione:
* dal metodo di bisezione si ha che:
    * xn = (bn - an) / 2
    * an+1 = xn se f(xn)f(b) < 0
    * bn+1 = xn se f(xn)f(a) < 0
* an < bn sempre
* l'errore di an e bn è sempre inferiore a (b-a)/2^n
* per il teorema dei carabinieri anche l'errore di xn converge a 0

**4 - stima del residuo pesato**

ipotesi:
* xn converge a c
* zn è la successione ottenuta dal teorema del valor medio

tesi:
* en = |f(xn)|/f'(zn) = |xn - c|

dimostrazione:
* applico il teorema del valort medio a c,xn
    * f(xn) - f(c) / (xn - c) = f'(zn)
    * f(xn) - f(c) = f'(zn)(xn - c) --> moltiplico per (xn - c)
    * f(xn) = f'(zn)(xn - c) --> in quanto f(c) = 0
    * f(xn)/f'(zn) = xn - c

**5 - convergenza globale newton**

ipotesi di convergenza globale:
* f(x) derivabile 2 volte in a,b
* f(a)f(b) < 0
* f''(x) sempre maggiore o minore di 0 in a,b
* f(x0) discorde a f''(x0)  
* esiste x0 : f(x0)f''(x0) > 0

tesi:
* lim xn -> c

dimostrazione:
* f convessa --> T(x) < f(x) sempre --> esiste xi : T(xi) = 0 in c,b
* xn+1 < xn
    * xn+1 = xn - f(xn)/f'(xn)
    * essendo il rapporto una quantità positiva la successione è decrescente
* esiste lim xn = c
    * lim xn+1 = lim xn - limf(xn)/limf'(xn) =  lim xn - f(lim xn)/f'(lim xn) = c - f(c)/f'(c) --> siccome f(x) = 0 si ha che lim --> c 

**6 - ordine convergenza newton**

**7 - ordine convergenza punto fisso**

**8 - esistenza ed unicità del polinomio interpolatore**

unicità:

se ci fossero 2 polinomi p,q che interpolano i nodi si avrebbe che:
* g(x) = p(x) - q(x)
* quindi g(xi) = 0 per ogni nodo
* g(x) avrebbe quindi n+1 radici
* questo va contro il teorema fondamentale dell'algebra

esistenza:

per dimostrare l'esistenza è sufficente dimostrare che da n+1 nodi diversi è sempre possibile creare il polinomio interpolatore di lagrange L(x) tale per cui L(xi) = yi
* Ni(x) = (x - x0)(x - x1)...(x - xn) SENZA (x - xi)
* Ki(x) = Ni(x) / Ni(xi)
    * Ki(xk) = 1 se xk = xi --> diventa N(xi)/N(xi)
    * Ki(xk) = 0 se xk != xi --> (xk - xk) --> 0/N(xi)
* L(x) = +++ yiKi(x)
* verifico che interpola:
    *  L(xk) = +++ yiKi(xk) --> ki(xk) è sempre 0 tranne quando i = k  quindi la sommatoria è = yi

**9 - convergenza uniforme dell'interopolatore lineare a tratti**

la convergenza uniforme di base dice che la funzione interpolatrice a tratti rientra in un tubicino attorno alla funzione

ipotesi:
* s = 1
* f derivabile s+1 volte in a,b
* xi in a,b
* n+1 nodi distinti con n multiplo di s

tesi:
* esiste k > 0 tale per cui dist(f, P) < k*s^2

dimostrazione:
* il max su tutto a,b è il max dei singoli intervalli:
    * dist(f, P) = max|f(x) - P(x)| in \[a,b\] = max(max(|f(x) - P(x)|) in \[i-1,i\])
* stimiamo l'errore
    * max(|f(x) - P(x)|) in \[i-1,i\] <= max(|f^s+1(x)|)\*h^s+1/4(s+1)  in \[i-1,i\] con h = estremi dell'intervallo / s
    * sostituisco con s = 1, h = (i - 1 - i)/2
    * max(|f(x) - P(x)|) in \[i-1,i\] <= max(|f''(x)|)\*h^2/8  in \[i-1,i\]  <= f''(x)\*h^2/8
* pongo f''(x) = M
* risulta che dist(f,P) <= M/8* h^2