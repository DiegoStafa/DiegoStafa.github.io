# Notazione asintotica

**notazione 𝜃(𝑔(𝑛))**

Una funzione f(n) appartiene a 𝜃(𝑔(𝑛)) se esistono due
costanti c1 e c2 tali che f(n) possa essere racchiusa tra
c1g(n) e c2g(n).

di base g(n) può limitare superiormente ed inferiormente f(n)

**notazione O(𝑔(𝑛))**

è sufficente che g(n) limiti solo superiormente f(n)

**notazione Ω(𝑔(𝑛))**

è sufficente che g(n) limiti solo inferiormente f(n)

# Analisi degli algoritmi

**complessità**

indica come varia il tempo di esecuzione sull'input

scala di complessità O grande:
* k < logn < n < nlogn < n^k < k^n < n!

**algoritmi iterativi**

per calcolare la complessità degli algoritmi iterativi basta sommare le complessità delle singole istruzioni

**equazione di ricorrenza**

si indica con T(n), descrive formalmente come viene eseguita la ricorsione, la soluzione di un'equazione di ricorrenza è la complessità dell'algoritmo

**metodo di sostituzione**

si cerca ad occhio di capire la complessità e si dimostra che l'equzione di ricorrenza la rispetta, ci sono 3 casi:
1. T(n) = O(f(n)) --> T(n) <= c*f(n)
2. T(n) = Ω(f(n)) --> T(n) >= c*f(n)
3. T(n) = 𝛩(f(n)) --> T(n) <= c1\*f(n) e  T(n) >= c2*f(n)

funzionamento:
1. si ottiene la disequazione dai casi sopra
2. si sostituisce T(n) con c*f(n) su argomento di T
3. si risolve la disequazione su c

esempio 1:

dati:
* T(n) = T(n/2) + T(n/4) + n
* dimostrare T(n) = O(n)

soluzione:
* T(n) <= c*f(n) // caso O grande
* T(n/2) + T(n/4) + n <= cn
* cn/2 + cn/4 + n <= cn // sostituisco
* // semplifico
* -c <= -4 --> c >= 4 // soluzione

**master theorem/teorema dell'esperto**

risolve le equazioni di ricorrenza nella forma:
* T(n) = aT(n/b) + f(n)

funzionamento:
* lim f(n) / (n^log<sub>b</sub>a) = k
* k > 0
    * T(n) = 𝛩(n^log<sub>b</sub>(a) * logn)
* k = 0
    * T(n) = 𝛩(n^log<sub>b</sub>(a)) se
        * lim f(n) / (n^log<sub>b</sub>(a - epsilon) = 0
* k = +inf
    * T(n) = 𝛩(f(n)) se
        * lim f(n) / (n^log<sub>b</sub>(a - epsilon) = +inf
        * af(n/b) <= kf(n)