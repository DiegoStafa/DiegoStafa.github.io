### Scrittura matriciale

dato un sistema lineare formato dalle seguenti equazioni:
- a<sub>11</sub>x<sub>1</sub> + a<sub>12</sub>x<sub>2</sub> + ... + a<sub>1n</sub>x<sub>n</sub> = b<sub>1</sub>
- a<sub>21</sub>x<sub>1</sub> + a<sub>22</sub>x<sub>2</sub> + ... + a<sub>2n</sub>x<sub>n</sub> = b<sub>2</sub>
    .
    .
    .
- a<sub>m1</sub>x<sub>1</sub> + a<sub>m2</sub>x<sub>2</sub> + ... + a<sub>mn</sub>x<sub>n</sub> = b<sub>m</sub>

la scrittura matriciale del sistema si ottiene impostando:
* si usa A<sub>nm</sub> per indicare la matrice dei coefficenti del sistema
* si usa b<sub>m</sub> (underscore) per indicare il vettore colonna dei termini noti del sistema
* si usa x<sub>n</sub> (underscore) per indicare il vettore colonna delle incognite del sistema

da cui:
* **A \* x = b è la scrittura matriciale del sistema**

---

### Algoritmo di Gauss (o eliminazione di Gauss, EG)
data una matrice A, l'algoritmo di Gauss:
* trasforma A in una matrice a gradini U
* ogni gradino deve essere alto una riga, la lunghezza non ha vincoli
* ogni gradino inizia con un 1 (la colonna che l'1 identifica è detta dominante)
* sotto i gradini ci sono solo zeri 
* numero di gradini == numero di righe non nulle

questa trasfrmazione trasforma A in U, la quale viene detta forma ridotta di gauss di A

le uniche 3 operazioni lecite dell'algoritmo di Gauss sono:
* **A → <sub>Ei(c)</sub> → B** moltiplica una riga i per uno scalare c diverso da 0 (significa anche dividere)
* **A → <sub>Eijc</sub> → B** somma ad una riga i, una riga j moltiplicata per uno scalare c
* **A → <sub>Eij → B** scambia la riga i con la riga j (Eij == Eji)

esempio gauss:
