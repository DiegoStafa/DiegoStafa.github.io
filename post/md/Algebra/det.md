
### Determinanti di una matrice

**determinanti di matrici quadrate**

indicando con Det(A) il determinante di una matrice A, allora:

* A<sub>1x1</sub> --> Det(A) == a<sub>1,1</sub>
* A<sub>2x2</sub> --> Det(A) == ad - bc
* A<sub>nxn</sub> 
    * Det(A) == riga i*cofattori della i-esima riga
    * Det(A) == colonna j trasposta*cofattori della j-esima colonna

il cofattore A<sub>i,j</sub> di una matrice A è:
* (-1)<sup>i+j</sup> * Det(C<sub>ij</sub>)
    * C<sub>ij</sub> è la matrice A senza la i-esima riga e j-esima colonna

nb: è meglio scegliere la riga/colonna che ha più zeri

```c++
// matrice quadrata
A = { a11 a12 ... a1n 
      a21 a22 ... a2n
      .
      .
      .
      an1 an2 ... ann }

riga = [ a11 a12 ... a1n ]

cofattori = [ A11
              A12
              .
              .
              .
              A1n ]

determinante = riga*cofattori
```


**determinanate di matrici triangolari sup/inf**

il determinanate di una matrice triangolare sup/inf è uguale al prodotto dei numeri sulla diagonale

**proprietà dei determinanti**

1. Det(A<sup>T</sup>) == Det(A)
2. Det(coniugato(A)) == coniugato(Det(A))
3. Det(A<sup>H</sup>) == coniugato(Det(A))
4. Det(AB) == Det(A) * Det(B)
5. A è singolare <--> Det(A) == 0


**equzione caratteristica**

è un equzione associata ad una matrice A, nella forma:
* Det(A - xId) = 0

---

### Autovalori, autovettori e autospazi

si definisce con E<sub>A</sub>(k), l'insieme dei vettori v tali per cui:
* Av == kv

oppure:
*  N(A - kId) = 0

se la condizione è rispettata:
* k si dice autovalore
    * l'insieme di tutti gli autovalori di una matrice si chiama spettro dello matrice
* v si dice autovettore
* E<sub>A</sub>(k) si dice autospazio
    * dim(autospazio) si dice molteplicità geometrica

**calcolo degli autovalori**

un numero k è un autovalore di A sse è soluzione dell'equazione caratteristica di A (det(A − kId) = 0)
* il numero di volte che k annulla l'equazione si dice molteplicità algebrica

di base è sufficiente calcolare gli zeri del suo polinomio caratteristico.

**calcolo della base di un autospazio**

si calcola la base di N(A - kId)v = 0


nb: 1 <= molt. geometrica <= molt. algebrica

**autovalori di matrici triangolari sup/inf**

gli autovalori sono tutti i numeri sulla diagonale

**indipendenza di autospazi**

la somma di autospazi di autovalori distinti è una somma diretta

l'unione delle basi di autospazi == base della somma diretta degli autospazi

**matrici simili**

due matrici A e B sono simili sse esiste una matrice S, tale per cui:
* A = SBS<sup>-1</sup>

proprietà:
1. P<sub>A</sub>(x) == P<sub>A</sub>(x) (polinomi caratteristici)
    * A e B hanno gli stessi autovalori e molteplicità
2. dim(E<sub>A</sub>(k)) == dim(E<sub>B</sub>(k))
3. v appartiene a E<sub>B</sub>(k) sse Sv appartiene a E<sub>A</sub>(k)

**matrici diagonalizzabili**

una matrice è diagonalizzabile sse per ogni suo autovalore molteplicità geometrica e algebrica corrispondono 

una matrice A è diagonalizzabile sse esistono matrice S e D, tale per cui:
* D è un matrice diagonale
* A = SDS<sup>-1</sup>

proprietà:
1. A e D sono simili
2. A<sup>n</sup> == SD<sup>n</sup>S<sup>-1</sup>

**matrici unitariamente diagonalizzabili**

una matrice si dice unitaria se
* A<sup>-1</sup> == A<sup>H</sup>

una matrice si dice ortogonale se:
* A<sup>-1</sup> == A<sup>T</sup>

una matrice si dice normale se:
* AA<sup>H</sup> == A<sup>H</sup>A

una matrice è unitariamente diagonalizzabile se D è una matrice unitaria e A è una matrice normale-


**teorema spettrale (forma moltiplicativa)**

A = UDU<sup>H</sup>

**teorema spettrale (forma additiva)**

A = k1P1 + k2P2 + ... + knPn

con P<sub>i</sub> = matrice di priezione del autospazio con autovalore k<sub>i</sub>

proprietà:
* se A = A<sup>H</sup> allora ha solo autovalori reali