### Spazio di probabilità

si indica con S = (omega, F, P), dove:
* omega indica lo spazio campionario
* F indica la sigma algebra
* P indica la misura di probabilità

### Spazio campionario

si indica con omega ed è l'insieme di tutti gli esiti di un esperimento aleatorio

omega = { o1, o2, o3 ... on }

notazioni:
* esiti (omega piccolo) sono elementi dell'insieme omega
    * { o1, o2, o3 ... }
* eventi (E) sono insiemi di esiti
    * { o1, o3 }, { o3, o4, o5 }

nb:
* se \|omega\| <= \|N\|, allora si dice spazio campionario discreto
* se \|omega\| <= \|R\|, allora si dice spazio campionario continuo

**operazioni sugli eventi**

dati due eventi E ed F:
* E<sup>c</sup> è il complementare di E
* E & F è l'intersezione
* E + F è l'unione
* E - F è la differenza simmetrica
* E / F è la differenza asimmetrica

come in logica, vale la legge di de morgan:
* (E & F)<sup>c</sup> == E<sup>c</sup> + F<sup>c</sup>

**partizione di un insieme**

dato un insieme A, una partizione è un gruppo di sottoinsiemi con le seguenti proprietà:
* ogni sottoinsieme è disgiunto tra loro (intersezione == 0)
* l'unione di tutti da A

**decomposizione rispetto all'intersezione**

dato un evento F ed una partizione P formata da E1, E2, E3..En, allora: 
* F = FE<sub>1</sub> + FE<sub>2</sub> + ... FE<sub>n</sub>  

**decomposizione di un evento rispetto alla differenza**

dato due eventi E ed F:
* F + E =  F-E + E-F + EF
* F + E = F + E-F


### Sigma Algebra

si indica con F corsivo

è un insieme di eventi, tale per cui:
* F non è vuoto
* il complementare degli eventi di F apprtiene ad F
* l'unione tra eventi di F appartiene ad F

rappresenta ciò che ci interessa sapere

proprietà:
* l'insieme vuoto appartiene sempre a sigma algebra
* omega appertiene sempre a sigma algebra
* l'intersezione tra elementi di F appertiene ad F

tipi di sigma algebra:
* omega e insieme vuoto (banale)
* omega, E, E<sup>c</sup>, insieme vuoto
* l'insieme delle parti di omega (tutti i possibili sottinsiemi)
    * prende il nome di **sigma massima**

su spazi campionari discreti si scegli sempre la sigma massima

### Misura di probabilità

è una funzione P che va da sigma algebra in \[0-1\], tale per cui:
* P(omega) == 1
* la sommatoria di P su eventi disgiunti == P della loro unione

di base associa ad ogni elemento della sigma un numero tra 0 e 1, che corrisponde alla probabilità dell'evento di accedere

proprietà
* P(E) == 1 - P(E<sup>c</sup>)
* P(ins. vuoto) == 0
* P(E + K) == P
* P(sottoinsieme) < di P(insieme)
* P(E unito F) == P(E) + P(F) - P(E intr. F) (formula inclusione esclusione)

**probabilità di un evento**

per calcolare la probabilità di un evento si calcolano tutte le probailità dei suoi esiti e si sommano

**probabilità su spazio di prob. discreto**

* omega = N
* F = 3n
* P(F) = 1/2<sup>F</sup>

la prob di sigma si calcola usando la formula, si risolve la serie e il risultato è 0.7

**probailità su spazio di probabilità uniforme**

tutti gli esiti sono equiprobabili, quindi la loro singola probabilità è 1/\|omega\|

la probilità dell'evento è quindi \|evento\| / \|omega\|

es.

lancio di un dado 2 volte, prob somma == 8?

* omega = 6x6
* E = {2,6}, {3,5}, {4,4}, {5,3}, {6,2}
* P(E) = \|E\|/\|O\| = 5/36

