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
* per assurdo si suppone che lim f(x) != L
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