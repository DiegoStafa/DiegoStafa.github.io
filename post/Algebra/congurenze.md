### Congreuenze

si dice che a congruo b modulo n se n \| (a-b)

**proprietà**

* la congruenza è riflessiva, a è congruo a se stesso modulo n
* la congruenza è simmetrica, b è congruo a a modulo n
* la congruenza è transitiva, a è congruo a b, e b è congruo a c, allora a è congru a  (tutto modulo n)
* se a congruo a b e c congruo a d allora a+c è congruo a b+d

nb: a è congruo a b mod n, sse a/n e b/n hanno stesso resto

**classi di confruenza**

dato un numero a e un modulo n, si definisce classe di congruenza \[a\]<sub>n</sub> come insieme di tutti gli interi congrui ad a mod n.

nb: l'insieme dei valori (chiamati rappresentanti) deila classe di confruenza è individuato dalla formula: a + nk con k appartenente agli interi

**proprietà**

* \[a\]<sub>n</sub> == \[a + kn\]<sub>n</sub>
* se c è un rappresentate della classe allora \[a\]<sub>n</sub> == \[c\]<sub>n</sub>

### Congruenze lineari

sono equzioni della forma ax congruo b mod n.

nb: se x0 è soluzione, la classe \[x0\]<sub>n</sub> è soluzione
nb: non tutte le congruenze lineari hanno soluzione.

**risoluzione congruenze lineari**

ax = b mod n

* d = mcd(a,n)
* se d non divide b allora non ha soluzioni
* se d divide b allora ha infinite soluzioni
    - le soluzioni di dividono in d classi di congruenza
    - si trova una soluzione x0

2x = 10 mod 12

d = mcd (2,12) --> 2

soluzioni in 2 classi di congruenza

cerco un x0 soluzione di 2x = 10 mod 12
per farlo scrivo d come d = ia + jn, cioè: 2 = i2 + j12