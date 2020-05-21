### Congreuenze

si dice che a congruo b modulo n se n \| (a-b)

**proprietà**

* la congruenza è riflessiva, a è congruo a se stesso modulo n
* la congruenza è simmetrica, b è congruo a a modulo n
* la congruenza è transitiva, a è congruo a b, e b è congruo a c, allora a è congru a  (tutto modulo n)
* se a congruo a b e c congruo a d allora a+c è congruo a b+d

nb: a è congruo a b mod n, sse a/n e b/n hanno stesso resto

**risoluzione di una congruenza lineare**

tutte le soluzioni di una congruenza lineare, se ci sono, sono del tipo:
* x<sub>0</sub> = i\*q

dove:
* q = b / d
* d = ia + jb --> trovi i con bezout


### classi di confruenza

di base la classe di congruenza è l'insieme di tutti gli interi che soddisfano una congruenza.

gli elementi (detti rappresentanti) deila classe di confruenza sono individuati dalla formula:
* a + nk con k intero

cioè \[a\]<sub>n</sub> == a + nk

**proprietà**

* \[a\]<sub>n</sub> e x = a mod n sono uguali, per definizione di classe di congruenza
* \[a\]<sub>n</sub> e \[a + kn\]<sub>n</sub> sono uguali, provare per credere
* \[a\]<sub>n</sub> e \[c\]<sub>n</sub> sono uguali se c è un rappresentante della classe \[a\]<sub>n</sub>
* \[a\]<sub>n</sub> e \[r\]<sub>n</sub> sono uguali (r è il resto ottenuto da a/n)

**operazioni**

* \[a\]<sub>n</sub> + \[b\]<sub>n</sub> == \[a+b\]<sub>n</sub> // uguale per il prodotto


### sistemi di congruenze

di base sistemi di congruenze lineari in cui bisogna trovare le soluzioni comuni

**teorema cinese dei resti**

di base serve a sapere se un sistema ha soluzioni

il sistema ha soluzioni se:
* ogni equazione è scritta nella forma x = a mod n
* i moduli di tutte le equazioni sono coprimi

**metodo risolutivo di newton**

per risolvere il sistema:
1. trovo x1 tale che x = b1 mod n1 (soluzione banale b1)
2. trovo x2 = x1 + t2\*n1 tale che x1 + t2*n1 = b2 mod n2
3. trovo x3 = x2 + t3\*n1\*n2 tale che x2 + t3\*n1\*n2 = b3 mod n3

le soluzioni del sistema sono \[x3\]<sub>n1\*n2\*n3</sub>

**metodo risolutivo di lagrange**

di base non c'è da fare nulla, la soluzione è data da: \[z\]<sub>n1\*n2</sub>, con:
* z = b1\*a1\*n1 + b2\*a2\*n2

**semplificazione di sistemi di congruenze**

per semplificare sistemi di congruenze che non rispettano le condizione del teorema cinese:
* si risolve la congruneza lineare trovando una classe di congruenza
* si scrive la classe di congruenza al posto della congruenza nel sistema