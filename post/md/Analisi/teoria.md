**domanda 1**

domande:
1. definizione di limite a L e +inf
2. analizzare come varia a<sup>n</sup> a +inf

risposta 1:
* per ogni numero E maggiore di 0 esiste un n tale per cui \|a<sub>n</sub> - L\| < E
* per ogni numero M maggiore di 0 esiste un n tale per cui a<sub>n</sub> > M


risposta 2:
* dipende da a:
    * se a è compreso tra -1 e 1 il limite è 0
    * se a è maggiore di 1 il limite è infinito
    * se a è minore di 1 il limite è indeterminato

**domanda 2**

domande:
1. dimostrare che il limite del prodotto di una funzione limitata e un'infinitesima è uguale a 0

risposta:
* \|an\| < M, |b<sub>n</sub>|< E, impica che il loro prodotto è minore di E\*M, che chiamandolo E' è la definizione di limite -> 0

**domanda 3**

domande:
1. enunciare il teorema ponte
2. dimostrarlo a sinistra
3. dimostrarlo a destra

risposta 1:
* lim f(x) = L con x->x<sub>0</sub> sse per ogni successione a<sub>n</sub>->x<sub>0</sub> allora lim f(a<sub>n</sub>) = L con n->+inf

risposta 2:
* si vuole dimostrare che lim f(a<sub>n</sub>) = L con n->+inf
    * cioè che \|f(a<sub>n</sub>) - L\| < E
* si scrive la definizione di lim f(x) = L con x->x<sub>0</sub>
    * per ogni E esiste un λ tale per cui per ogni \|x - x<sub>0</sub>\| < λ allora \|f(x) - L\| < E
* si scrive la definzione di a<sub>n</sub>->x<sub>0</sub>
    * per ogni E esiste un n<sub>0</sub> dopo la quale \|a<sub>n</sub> - x<sub>0</sub>\| < E'
* si prende E' < λ, quindi vale \|a<sub>n</sub> - x<sub>0</sub>\| < λ, che verifica la tesi

risposta 3:
* per assurdo si suppone che lim f(x) != l
* per ogni λ esiste un E tale per cui \|f(x) - L\| > E
* esiste quindi un valore x<sub>λ</Sub> che soddisfa quanto detto sopra per ogni λ
* si sceglie λ = 1/n
* \|x<sub>n</sub> - x<sub>0</sub>\| < 1/n
* cioè \|f(x<sub>n</sub>) - L\| > E, che contraddice l'ipotesi

**domanda 4**

domande:
1. definizione di asintoto obliquo
2. come calcolare l'asintoto obliquo

risposta 1:
* lim f(x) - (ax + b) = 0 a + inf

risposta 2:
* lim f(x) - ax - b = 0
* lim f(x) - ax  = b
* lim f(x)/x - a = 0
* lim f(x)/x = a

**domanda 5**

domande:
1. definizione di funzione crescente e strettamente crescente
2. esempio di funzione crescente ma non strettamente crescente
3. relazione tra crescenza e derivata e dimostrazione

risposta 1:
* f(a) >= f(b) quando a > b

risposta 2:
* X<sup>3</sup>

risposta 3:
* se f(x) crescente allora f'(x) > 0
* dimostrazione:
    * f'(x) = lim f(x + h) - f(x) / h
    * si fanno i casi con h<sup>+</sup> e h<sup>-</sup>

**domanda 6**

domande:
1. definizione di o(f) per x->x0

risposta:
* una funzione è o-piccolo di un'altra funzione se il limite del rapporto è == 0


**domanda 7**

domande:
1. dimostrare che la radice ennesima di n a +inf == 1 ed è decrescente per n maggiore-uguale di 3

risposta:
* si scrive il limite in forma esponenziale
* si porta fuori dal logaritmo l'esponente
* si si risole il limite

**domanda 8**

domande:
1. dimostrare che una successione decrescente illimitata inferiormente ha limite -inf
2. esempio illimitata inf. che non ha lim -inf

risposta 1:
* se an illmitato inf allora per ogni M esiste un n tale per cui an < M, dalla decrescenza an<sub>0</sub> < an < M

risposta 2:
* (-n)<sup>n</sup>

**domanda 9**

domande:
1. enunciare il criterio del rapporto

risposta:
* il criterio del rapporto afferma che per calcolare il limite di una successione a termini positivi a +inf, si fa il limite del rapporto tra il termine ennesimo successivo ed l'ennesimo
    * \> 1 la successione tende a +inf
    * = 1 non si può dire nulla
    * < 1 la successione tende a 0 

**domanda 10**

domande:
1. dare la definizione di SUP e INF di A
2. dimostrare che se A è contenuto in B allora il SUP A <= SUP B
3. dimostrare che se il SUP appartiene ad A allora è anche il MAX

risposta 1:
* SUP A è il più piccolo dei maggioranti di A
* un maggiorante è un qualsiasi numero >= a tutti gli elementi di A (può appartenere ad A o anche no)

risposta 2:
* ogni elemento di A appartiene a B
* SUP B è quindi anche maggiore di ogni elemento di A, cioè è un maggiorante di A
* SUP A è il più piccolo dei suoi maggioranti
* quindi SUP A <= SUB B

risposta 3:
* se MAX A non fosse SUP A allora significa che un elemento di A è maggiore del suo SUP, assurdo

**domanda 11**

domande:
1. definizione di log<sub>a</sub>x
2. dimostrare che log<sub>a</sub>xy = log<sub>a</sub>x + log<sub>a</sub>y
3. dimostrare che log<sub>a</sub>x<sup>y</sup> = ylog<sub>a</sub>x

risposta 1:
* log<sub>a</sub>x è definita come la funzione inversa di a<sup>x</sup>
* 

risposta 2:
* x = e<sup>logx</sup>
* y = e<sup>logy</sup>
* xy = e<sup>logx</sup> * e<sup>logy</sup> -->  e<sup>logx + logy</sup>
* logxy = logx + logy 
* logxy = logx + logy 

riposta 3:
* x = e<sup>logx</sup>
* x<sup>y</sup> = e<sup>logx<sup>y</sup></sup> --> e<sup>ylogx</sup>
* logx<sup>y</sup> = ylogx


**domanda 12**

domande:
1. dare la definizione di limite di una funzione (tutte)
2. enunciare e dimostrare t. permanenza del segno
3. se f(x) < 0 in un intorno di x<sub>0</sub> allora: lim f(x<sub>0</sub>) < 0

risposta 1:
* per ogni numero E maggiore di 0 esiste un numero Lambda maggiore di 0, tale per cui se \|x - x<sub>0</sub>\| < Lambda, allora \|f(x) - L\| < E

risposta 2:
* il teorema della permanenza del segno afferma che se il lim f(x) = L, allora esiste un'intorno di x<sub>0</sub> tale per cui:
    * se L > 0 allora: f(x) > L / 2
    * se L < 0 allora: f(x) < L / 2
    * se L != 0 allora: \|f(x)\| < \|L / 2\|
* dimostrazione
    * si scrive la definizione di limite
    * si sceglie e = L/2

risposta 3:
* no, f(x) = -x<sup>2</sup>

**domanda 13**

domande:
1. dare definizione di derivata e retta tangente
2. dimostrare che f(x) = T(x) + o(x-x<sub>0</Sub>)
3. dimostrare che se f(x) è crescente allora f'(x) >= 0

risposta 1:
* la derivata è il limite del rapporto incrementale di una funzione
* la tangente T(x) in x<sub>0</sub> è definita come T(x) = f'(x<sub>0</sub>)(x - x<sub>0</sub>) +f(x<sub>0</sub>)

risposta 2:
* si porta a sinistra T(x)
* si scrive la formula della tangente al posto di T(x)
* si spezza la frazione e si dimostra facilmente

risposta 3:
* si fa il rapporto incrementale sinistro e destro e applicando la proprietà di crescenza si dimostra

**domanda 14**

domande:
1. dimostrare che derivabilità implica continuità
2. dimostrare che la derivata in un pt. di max o min locale è uguale a 0

risposta 1:
* si scrive la definizione di derivata
* si porta a sinistra la derivata
* denominatore comune
* si moltiplica ambo i menbri per x - x<sub>0</sub>
* si porta tutto a destra tranne f(x)

risposta 2:
* si fa il rapporto incrementale sinistro e destro applicando la proprietà di max e min locale
* si nota che i due limiti hanno segno discordo, quindi in x<sub>0</sub> la derivata è 0


**domanda 15**

domande:
1. definizione di f(x)=O(g(x)) per x->x<sub>0</sub>
2. dimostrare che lim xlogx = 0 per x->0
3. dimostrare che lim logx/x = 0 per x->+inf

risposta 1:
* significa che il lim f(x)/g(X) = 0 per x->x<sub>0</sub>
 
risposta 2:

risposta 3:

**domanda 16**

domande:
1. formula della sommatoria da 1 a n di x<sup>k</sup>
2. studiarne il comportamneto al variare di x

risposta 1:
* x - x<sup>n+1</sup> / 1 - x per x !=1
* n altrimenti

risposta 2:
* se \|x\| < 1 allora vale x / 1 - x
* se x >= 1 allora vale +inf
* se x <= -1 allora non esiste

**domanda 17**

domande:
1. enunciare il teorema di rolle o lagrange

risposta:
* il teorema di rolle afferma che se una funzione è continua in un intervallo chiuso \[a,b\], derivabile nell'intervallo aperto \(a,b\) ed f(a) = f(b), allora esiste almeno un punto c nell'intervallo tale per cui f'(c) = 0
    * ipotesi:
        * f(x) continua in \[a,b\]
        * f(x) derivabile in \(a,b\)
        * f(a) = f(b)
    * tesi:
        * esite c t.c. f'(c) = 0

**domanda 18**

domande:
1. enunciare la diseguaglianza tra derivate e funzioni

risposta
* ipotesi:
    * f(x<sub>0</sub>) = g(x<sub>0</sub>)
    * f'(x) < g'(x)
* tesi:
    * f(x) < g(x) per x > x<sub>0</sub>
    * f(x) > g(x) èer x < x<sub>0</sub>
**domanda 19**

domande:
1. dire quando si può calcolare f'(x<sub>0</sub>) come lim f'(x) con x->x<sub>0</sub> 

rispsta;
* si può applicare sse il limite esiste

**domanda 20**

domande:
1. enunciare il teorema della derivata del quoziente
2. dimostrarlo

risposta 1:
* il teorema afferma che la derivata di un quoziente tra due funzioni è uguale a:
    * -f(x)g'(x) + g(x)f'(x) / g(x)<sup>2</sup>

risposta 2:
* si fa il rapporto incrementale di f(x)/g(x)
* si fa mcm tra i denominatori del numeratore
* al numeraotore si toglie ed aggiunge f(x)g(x)
* si raccoglie g(x) a sinistra e f(x) a destra
* si si distribuisce 1/h, fine


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
* si impone che w<sup>n</sup> = z
* si scrive w in forma trigonometrica
    * w = A(cosx + isinx)
* (A(cosx + isinx))<sup>n</sup> = z
* A<sup>n</sup>()

risposta 2:
* **da finire**

risposta 3:
* **da finire**

**domanda 36**

domande:
1. data la funzione y' = a(x)y dimostrare che se y<sub>1</sub> y<sub>2</sub> sono soluzioni allora esiste una loro combinazione lineare y<sub>3</sub> anch'essa soluzione
2. dimostrare che tutte le soluzioni sono del tipo y = ce<sup>A(x)</sup>, con A'(x) = a(x) 

risposta 1:
* 

risposta 2:
* 


**domanda 37**

domande:
1. data la funzione y' = a(x)y + b(x) ricavarne la soluzione generale

risposta:
* 


**domanda 38**

domande:
1. data la funzione y' = a(x)y + b(x) dimostrare che la soluzione al problema di cauchy esiste ed è unica

risposta:
* 


**domanda 39**

domande:
1. data la funzione y' = f(x)g(y) ricavarne la soluzione
2. dare il significato del problema di cauchy
3. dare un esempio di funzione e problema di cauchy con più di una soluzione

risposta 1:
* 

risposta 2:
* 

risposta 3:
* 

**domanda 40**

domande:
1. 

