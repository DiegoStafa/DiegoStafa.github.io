**domanda 21**

domande:
1. scrivere la formula di taylor

risposta:
* f<sup>k</sup>(x<sub>0</sub>)(x - x<sub>0</sub>) / k!     

nb: k parte da 0

**domanda 22**

domande:
1. dimostrare la continuità di sinx
2. dimostrare che lim sinx / x = 0
3. dimostrare che lim sin(x<sup>2</sup>) non esiste per x->+inf

risposta 1:
* 

risposta 2:
* si usa hopital

risposta 3:
* si dimostra con il teorema ponte

**domanda 23**

domande:
1. dimostrare che se f(x) è continua in un intervallo chiuso \[a,b\] allora l'immagine è contenuta tra MIN e MAX di f(x)

risposta:
* esiste un x<sub>m</sub> tale per cui f(x<sub>m</sub>) = MIN (per weirstrass)
* esiste un x<sub>M</sub> tale per cui f(x<sub>M</sub>) = MAX (per weirstrass)
* quindi per definizione di MIN e MAX: MIN <= f(x) <= MAX

**domanda 24**

domande:
1. definizione di partizione
2. definizione di funzione a scala
3. integrale della funzione a scala in \[a,b\]
4. condizione affinchè una funzione sia integrabile secondo reinmann
5. definizione di integrale in \[a,b\]
6. condizione sufficente di integrabilità
7. esempio di funzione non integrabile

risposta 1:
* una partizioni è un insieme di punti ordinati

risposta 2:
* una funzione a scala è una funzione costante negli intervalli formati dai punti di una partizione

risposta 3:
* l'area di una funzione a scala è la sommatoria delle aree formate dai rettangoli di ogni intervallo

risposta 4:
* per ogni E maggiore di 0 esistono 2 approssimazioni della funzione a scala alla funzione t.c la loro differenza sia minore di E

risposta 5:
* si definisce l'integrale come l'area della funzione a scala che approssima la funzione

risposta 6:
* la funzione deve essere continua in \[a,b\]

risposta 7:
* funzione di dirichelet

**domanda 25**

domande:
1. enunciare il teorema della media integrale
2. dimostrarlo

risposta 1:
* il teorema della media integrale afferma che esiste un numero c t.c. l'integrale tra \[a,b\] di f(x) == f(c)(b - a)

risposta 2:
* si ha che min < f(x) < max
* si integra 
* min\*(b-a) < integrale\{ f(x)dx < max\*(b-a)
* min < 1/(b-a) integrale\{ f(x)dx < max
* siccome questo valore è compreso tra il min e max allora essendo la funzione continua deve assumere in un punto c questo valore
* f(c) = 1/b-a integrale\{ f(x)dx

**domanda 26**

domande:
1. definizione di funzione integrale
2. enunciare il teorema fondamentale del calcolo integrale 
3. dimostrarlo
4. equazione della retta tangente alla funzione integrale

risposta 1:
* si definisce la funzione integrale come A(x) = integrale\{ f(t)dt tra \[a,x\]

risposta 2:
* il TFC afferma che A'(x) = f(x)

risposta 3:
* si scrive il rapporto incrementale della funzione integrale
* si spezza l'integrale con l'h in due integrali, tra \[a,x\] e tra \[x.x+h\]
* si semplifica
* si usa il teorema della media al numeratore
* si semplifica
* siccome c è tra \[x,x+h\] allora c = x per h->0
* lim f(x) = f(x) in quanto continua, fine

risposta 4:
* T(x) = A(x<sub>0</sub>) + A'(x<sub>0</sub>)(x - x<sub>0</sub>)
* cioè T(x) = A(x<sub>0</sub>) + f(x<sub>0</sub>)(x - x<sub>0</sub>)

**domanda 27**

domande:
1. definizione di integrale indefinito
2. enunciare la regola di barrow
3. dimostrarla

nb: indico con pr(x) la primitiva di f(x)

risposta 1:
* data f(x) l'integrale indefinito assegna una famiglia di funzioni ad f(x) chiamate primitive, tali per cui la loro derivata è uguale a f(x)

risposta 2:
* la regola di barrow afferma che: integrale\{ f(xt)dx tra \[a,b\] = pr(b) - pr(b)


risposta 3:
* ipotesi:
    * f(x) continua
    * pr(x) una primitiva di f(x)
        * pr'(x) = f(x) 
* tesi:
    * integrale{ f(x)dx tra \[a,b\] = pr(b) - pr(a)
* dimostrazione:
    * si prende la primitiva particolare A(x) = pr(x) + k che vale 0 quando x=a
    * A(b) = pr(b) + k cioè integrale\{ f(x)dx tra \[a,b\], si trova k
    * A(a) = pr(a) + k cioè integrale\{ f(x)dx tra \[a,a\] cioè 0
    * k = -pr(a)
    * si sostiutisce, quindi pr(b) - pr(a) = integrale\{ f(x)dx tra \[a,b\]

**domanda 28**

domande:
1. che relazione c'è tra F(x) = integrale\{ f(t)dt tra \[a,x\] e G(x) = integrale\{ f(t)dt tra \[b,x\]
2. cosa si può ricavare quindi dal teorema di lagrange
3. calcolare la derivata di H(x) = integrale\{ f(t)dt tra \[a,h(x)\]

risposta 1:
* F(x) e G(x) hanno la stessa derivata

risposta 2:
* siccome hanno la stessa derivata F(x) e G(x) differiscono al più di una costante k

risposta 3:
* si calcola la derivata di F(h(x)) = integrale\{ f(t)dt tra \[a,h(x)\]
* da cui F'(h(x)) = F'(h(x))h'(x) cioè f(h(x))h'(x)

**domanda 29**

domande:
1. enunciare la formula di integrazione per parti
2. dimostrarla
3. enunciare la formula di integrazione per sostituzione
4. dimostrarla

risposta 1:
* integrale\{ f'(x)g(x)dx = f(x)g(x) - integrale\{ f(x)g'(x)dx

risposta 2:
* si scrive la regola di derivazione del prodotto
* si integra tutto
* si porta tutto a destra
* si porta a sinistra uno degli integrali

risposta 3:
* se G(x) = integrale\{ f(h(x))h'(x)dx allora F(h(x)) = G(x) + k

risposta 4:
* (G(x))' = f(h(x))h'(x)
* (F(h(x)))' = F'(h(x))h'(x) = f(h(x))h'(x)
* quindi (F(h(x)))' == (G(x))ì
* siccome le due funzioni hanno derivata uguale, le primitive differiscono al più di una costante

**domanda 30**

domande:

data la funzione F(x) = integrale{ \|e<sup>t</sup> - 1\|dt tra \[1,2x\]
1. dimostrare la crescenza in 2 modi
2. determinare quante volte è derivabile
3. determinare la convessità
4. abbozzare il grafico

**domanda 31**

domande:
1. definizione di serie convergente
2. definizione di serie divergente
3. definizione di serie indeterminata
4. dimostrare che una serie a termini positivi non è mai indeterminata
5. dimostrare che in una serie convergente il lim a<sub>n</sub> = 0 con x->+inf
6. dimostrare che è una condizione necessaria ma non sufficente
7. definizione di serie telescopica
8. calcolo di una serie telescopica

risposta 1:
* S<sub>n</Sub> è convergente se lim S<sub>n</sub> = L con n->+inf

risposta 2:
* S<sub>n</Sub> è divergente se lim S<sub>n</sub> = L con n->+inf

risposta 3
* S<sub>n</Sub> è indeterminata se non esiste lim S<sub>n</sub> con n->+inf

risposta 4:
* S<sub>n</Sub> è monotona crescente
* essendo monotona il limite o esiste o è +inf

risposta 5:
* a<sub>n</sub> = S<sub>n</sub> - S<sub>n-1</sub>
* si fa il lim con n->+inf sia a sinistra che a destra
* lim a<sub>n</Sub> = 0

risposta 6:
* si dimostra con il controesempio della serie 1/n, la serie diverge ma la successione converge a 0

risposta 7:
* è una serie la cui successione è del tipo a<sub>n</sub> - a<sub>n+k</sub>

risposta 8:
* al serie telescopica è uguale alla somma parziale della successione fino a k, cioè a<sub>1</sub> + a<sub>2</sub> + ... + a<sub>k</sub>

**domanda 32**

domande:
1. determinare il carattere della serie di 1/n<sup>p</sup> al variare di p
2. dimostrare che se p = 2 allora la serie è <= 2
3. dimostrare che se p = 1/2 allora la serie diverge a +inf


risposta 1:
* se p >= 1 la serie converge
* se p < 1 la serie diverge

risposta 2:
* si deduce da sopra

risposta 3:
* si deduce da sopra


**domanda 33**

domande:
1. enunciare il criterio di leibnitz per le serie a segno alterno
2. dimostrarlo

nb: una successione a segno alterno è del tipo: (-1)<sup>n</sup>a<sub>n</sub>

risposta 1:
* il criterio di leibnitz afferma che se a<sub>n</sub> è a termini positivi, decrescente e tende a 0, allora la serie è convergente

risposta 2:
* le somme parziali di indice pari sono crescenti
* le somme parziali di indice dispari sono decrescenti
* essendo crescenti le somme parziali di indice pari sono in particolare tutte maggiori della somma parziale di indice 1
* essendo decrescenti le somme parziali di indice dispari sono in particolare tutte minori della somma parziale di indice 2
* lim S<sub>2n</sub> = L<sub>1</sub>
* lim S<sub>2n-1</sub> = L<sub>2</sub>
* dimostro che L<sub>1</sub> = L<sub>2</sub> = 0
* lim S<sub>2n</sub> - S<sub>2n-1</sub> = L<sub>1</sub> = L<sub>2</sub>
    * S<sub>2n</sub> - S<sub>2n-1</sub> = a<sub>2n</sub>
* lim a<sub>2n</sub> = L<sub>1</sub> = L<sub>2</sub>
* per ipotesi a<sub>n</sub> tende a 0
* L<sub>1</sub> = L<sub>2</sub> = 0
* L<sub>1</sub> = L<sub>2</sub>

**domanda 34**

domande:
1. enunciare il criterio del rapporto per le serie
2. dimostrarlo

risposta 1:
* il criterio del rapporto afferma che per determinare il carattere di una serie, si fa il limite del rapporto tra il termine ennesimo successivo ed l'ennesimo della successione
    * se L > 1 la serie diverge
    * se L < 1 la serie converge
    * se L = 1 non si può dire nulla

risposta 2:
* caso L < 1
* per definizione di limite:
    * \|a<sub>n+1</sub>/a<sub>n</sub> - L\| < E
    * L - E < a<sub>n+1</sub>/a<sub>n</sub> < E + L

**domanda 35**

domande:
1. dimostrare che dato un numero complesso z, allora esistono sempre n radici di z
    * una radice w di z è tale per cui w<suP>n</suo> = z
2. scrivere la formula per le radici cubiche con z=-1
3. dimostrare che se P(z) è un polinomio a coefficenti complessi, allora se z<sub>0</sub> è una radice, anche z<sub>0</sub> coniugato lo è

risposta 1:
* si scrive z in forma trigonometrica
    * A(cosx + isinx)
    * A è il modulo
    * x è l'argomento
* A<suo>1/n</sup>(cos(x + 2Kpi / n) + isin(x + 2Kpi / n)) individua tutte le radici di z al variare di k da 0 a n-1

risposta 2:
* si scrive la forma trigonometrica di -1
    * modulo = rad(a<sup>2</sup> + b<sup>2</sup>)
    * argomento = arctan(b/a)
* 1(cos(0) + isin(0))
* si trovano le radici cubiche
* 1(cos(2kpi/3) + isin(2kpi/3)) con k da 0 a 2

risposta 3:
* z<sub>0</sub> è una radice di P(x) allora significa che P(z)=0
* si coniuga tutto a destra e a sinistra
* P<sup>c</sup>(z) = 0
* il coniugato di un polinomio si può spezzare sulla somma e il prodotto
* il coniugato di un numero reale è il numero reale stesso
* il coniugato si applica quindi solo al numero complesso
* P(z<sup>c</sup>) = 0

**domanda 36**

domande:
1. data la funzione y' = a(x)y dimostrare che se y<sub>1</sub> y<sub>2</sub> sono soluzioni allora esiste una loro combinazione lineare y<sub>3</sub> anch'essa soluzione
2. dimostrare che tutte le soluzioni sono del tipo y = ce<sup>A(x)</sup>, con A'(x) = a(x) 

risposta 1:
* si dimostra le L(y) = y' - a(x)y è una funzione lineare
* quindi se L(y<sub>1</sub>) e L(y<sub>2</sub>) sono soluzioni, allora L(ay<sub>1</sub> + by<sub>2</sub>) è soluzione

risposta 2:
* si divide tutto per y
* si integra tutto
* a sinistra si ha sempre un logaritmo
* a destra si ha A(x)
* si eleva tutto alla e, fine


**domanda 37**

domande:
1. data la funzione y' = a(x)y + b(x) ricavarne la soluzione generale

risposta:
* y' - a(x)y = b(x)
* si moltiplica tutto per e<sup>-A(x)</sup>
* e<sup>-A(x)</sup>y' - e<sup>-A(x)</sup>a(x)y = e<sup>-A(x)</sup>b(x)
* si nota che tutto ciò a sinistra è uguale ad (e<sup>-A(x)</sup>y)'
* (e<sup>-A(x)</sup>y)' = e<sup>-A(x)</sup>b(x)
* e<sup>-A(x)</sup>y = integrale{ e<sup>-A(x)</sup>b(x)dx
* y = e<sup>A(x)</sup>(integrale{ e<sup>-A(x)</sup>b(x)dx)

**domanda 38**

domande:
1. data la funzione y' = a(x)y + b(x) dimostrare che la soluzione al problema di cauchy esiste ed è unica

risposta:
* il problema di cauchy impone y<sub>0</sub> = y(x<sub>0</sub>)
* si sostituisce quindi x ad x<sub>0</sub>
* y =  e<sup>A(x<sub>0</sub>)</sup>(integrale{ e<sup>-A(x<sub>0</sub>)</sup>b(x<sub>0</sub>)dx)
* si ricava la C e la si sostituisce alla precedente formula
* l'esistenza è garantita dal teorema fondamentale del calcolo integrale
* per dimostrare l'unicità:
    * si suppone che S(x) sia un'altra primitiva di a(x)
    * quindi S(x) = A(x) + k
    * da cui S(x) - S(x<sub>0</sub>) = A(x) - A(x<sub>0</sub>) (???)

**domanda 39**

domande:
1. data la funzione y' = f(x)g(y) ricavarne la soluzione
2. dare il significato del problema di cauchy
3. dare un esempio di funzione e problema di cauchy con più di una soluzione

risposta 1:
* si trovano le soluzioni costanti
* si divide tutto per g(y)
* si integra tutto
* si esplicita la y

risposta 2:
* il problema di cauchy fissa un punto nel piano ed impone di trovare la soluzione dell'equzione differenziale che passa in quel punto

risposta 3:
* y' = y<sup>1/3</sup>
* y(0) = 0

**domanda 40**

domande:
1. data una f(x,y) definire la derivata in (x<sub>0</sub>, y<sub>0</sub>) rispetto ad x e y e darne il significato geometrico
2. dire cosa significa f di C<sup>1</sup>(R<sup>2</sup>)
3. scrivere l'equzione delle rette tangenti a f(x,y) in (x<sub>0</sub>, y<sub>0</sub>) nei piani x = x<sub>0</sub> e y = y<sub>0</sub>
4. scrivere l'equzione del piano tangente in (0,0) di f(x,y) = xarctan(xy)

risposta 1:
* si fa il rapporto incrementale rispetto ad x e y
    * lim f(x+h, y<sub>0</sub>) - f(x<sub>0</sub>,y<sub>0</sub>) / h
    * lim f(x<sub>0</sub>, y+h) - f(x<sub>0</sub>,y<sub>0</sub>) / h
* rispetto a x è il coefficente angolare della funzione f(x,y<sub>0</sub>)
* rispetto a y è il coefficente angolare della funzione f(x<sub>0</sub>,y)

risposta 2:
* significa che f è continua in R<sup>2</sup>

risposta 3:
* rispetto ad x: T(x,y) = f (x<sub>0</sub>,y<sub>0</sub>) + f'<sub>x</sub>(x<sub>0</sub>,y<sub>0</sub>)(x − x<sub>0</sub>)
* rispetto ad y: T(x,y) = f (x<sub>0</sub>,y<sub>0</sub>) + f'<sub>y</sub>(x<sub>0</sub>,y<sub>0</sub>)(y − y<sub>0</sub>)

risposta 4:
* T(x,y) = f (x<sub>0</sub>,y<sub>0</sub>) + f'(x<sub>0</sub>,y<sub>0</sub>)(x − x<sub>0</sub>) + f'(x<sub>0</sub>,y<sub>0</sub>)(y − y<sub>0</sub>)