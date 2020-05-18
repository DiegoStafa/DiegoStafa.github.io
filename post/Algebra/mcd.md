**MCD in N e Z**

dati a, b non nulli, esiste un numero d naturale, tale che:
* d \| a e d \| b
* se z \| a e \| b allora z \| d

in N l'mcd è unico.
in Z mcd(a,b) == mcd(-a,b) == mcd(a,-b) == mcd(-a,-b).

**conseguenze**

* mcd(a,b) e b\|a --> mcd = b
* mcd(0,b) == b
* a = bq + r --> mcd(a,b) == mcd(b,r)

**calcolo MCD in N (algoritmo di euclide)**

function mcd(a,b)

* a/b --> a = bq + r 
    - se r == 0, return b
    - se r != 0, call mcd(b,r)

**calcolo MCD in Z**

ci sono 2 modi:
* algoritmo di euclide con i valori assoluti (più facile)
* algoritmo di euclide utilizzando la divisione in Z

**identità di Bezout**

di base roba dei corsi di matematica, ax + by = d, per risolverla:
* mcd di euclide con di a,b
* ricavi d
* scrivi i prodotti a ritroso
* ricavi x,y