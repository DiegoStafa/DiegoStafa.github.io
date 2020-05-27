### Matrici invertibili

di base una matrice quadrata A è invertibile se esiste una matrice quadrata B tale per cui:
* AB == matrice identica (quella con diagonale == 1)
* BA == matrice identica

la matrice B è l'inversa di A e si scrive come A<sup>-1</sup> ed è anche unica.

nb: se A è quadrata: AB == id implica BA == id e B è unica, se A non è quadrata non si può dire nulla.

**proprietà matrici quadrate**

* (AB)<sup>-1</sup> == B<sup>-1</sup>A<sup>-1</sup>
* (A<sup>-1</sup>)<sup>-1</sup> == A
* (A<sup>T</sup>)<sup>-1</sup> == (A<sup>-1</sup>)<sup>T</sup>
* (A<sup>H</sup>)<sup>-1</sup> == (A<sup>-1</sup>)<sup>H</sup>

**condizione sufficente di invertibilità per matrici qudarate**

condizione generale:
* A ammette inversa sse la sua forma ridotta di gauss ha solo colonne dominanti

condizione specifica per ordine 2:
* A ammette inversa sse la differenza tra la diagonale e l'antidiagonale != 0

per calcolare l'inversa di A:
1. si scrive la matrice aumentata \[A \| Id\]
2. si fa Eg della matrice aumentata e si ottiene \[U \| b\]
    1. se U ha delle colonne libere
        1. non esiste l'inversa
    2. se U ha tutte le colonne dominanti
        1. si esegue gauss-jordan su U
        2. dopo l'eliminazione si avrà \[Id \| A<sup>-1</sup>\]

per calcolare l'inversa di A di ordine 2:
1. si esegue (1/diff diag) moltiplicato alla stessa matrice dove:
    * si scambiano gli elementi della diagonale
    * si scambiano gli elementi dell'antidigonale e si moltiplicano per -1