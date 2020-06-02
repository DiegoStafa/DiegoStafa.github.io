### Sottospazi di spazi vettoriali

sia V uno spazio vettoriale in R o C, allora U sottoinsieme di V si dice sottospazio vettoriale di V sse rispetta queste condizioni:
1. deve contenere il vettore nullo
2. se v1 e v2 appartengono a U allora v1+v2 deve appartenere a U
3. se v appartiene a U allora k\*v appartiene a U, con k scalare

nb: la prima condizione equivale a imporre che U sia non vuoto

di base un sottospazio vettoriale è uno spazio vettoriale

**somma di sottospazi**

dato uno spazio vettoriale V, e due sottospazi U1 e U2, si indica con:
* U1 + U2 la somma dei sottospazi

che significa sommare il generico vettore u1 di U1 con il generico vettore u2 di U2, la somma di 2 sottospazi è sempre un sottospazio

**somma diretta di sottospazi**

dato uno spazio vettoriale V, e due sottospazi U1 e U2, tali per cui:
* U1 intersecato U2 == {0} 

si indica con:
* U1 ⊕ U2 la somma diretta dei sottospazi

---

**spazio nullo di una matrice**

data una matrice A, si definisce lo spazio nullo N(A) come sottospazio vettoriale formato da vettori v tale per cui:
* Av = 0

si verifica che è uno spazio vettoriale facendo:
1. contiene il vettore nullo --> in quanto Av = 0 --> v = 0
2. la somma è interna all'insieme --> in quanto A(v1+v2) = 0 --> Av1 + Av2 = 0 --> 0 + 0 = 0
3. il prodotto tra uno scalare è interno all'insieme --> in quanto A(cv) = 0 --> c(Av) = 0 --> c(0) = 0

si dimostra che N(A) == N(U) con U forma ridotta di A

---

**Combinazione lineare**

di base un a combinazione lineare è un espressione del tipo:
* a<sub>1</sub>v<sub>1</sub> + a<sub>2</sub>v<sub>2</sub> + a<sub>3</sub>v<sub>3</sub> + ... + a<sub>n</sub>v<sub>n</sub>

**sottospazio vettoriali**

di base è il risultato di tutte le possibili combinazioni lineari di un insieme di vettori

questo insieme si indica <v<sub>1</sub>, v<sub>2</sub>, ... v<sub>n</sub>> ed è un sottospazio vettoriale


**insieme dei multipli o sottospazio vettoriale v**

di base è la stessa cosa di un sottospazio vettoriale, ma l'insieme dei vettori è formato da un solo vettore

l'insieme dei multipli è un sottospazio vettoriale, dato che:
* esiste il vettore nullo --> 0\*v
* la somma è interna --> v1+v2 --> cv + sv --> (c+s)v
* il prodotto tra uno scalare è interno --> kv1 == k\*(cv) == (kc)v

l'insieme dei multipli ha 1 elemento se v == 0 e tanti quanti k se v != 0

**sistemi o insiemi generatori**

dat un spazio V, e un insieme di vettori A=(v1,v2..vn) di V, se per ogni elemento di t di V esiste una combinazione lineare di A che ottiene t, allora A è un sistema generatore di V

proprietà:
* se un insieme C contiene un sistema generatore A, allora C è un sistema generatore
* se un elemento t di un sistema generatore A è ottenibile da una combinazione lineare di altri elementi di A, allora A -{t} è ancora un sistema generatore

se A è un insieme finito si dice che V è **finitamente generabile**

---

**Vettori linearmente (in)dipendenti**

dato un insieme di vettori {v1, v2, ...vn}, questi si dicono linearmente indipendenti tra loro se l'unica soluzioni di:
* a<sub>1</sub>v<sub>1</sub> + a<sub>2</sub>v<sub>2</sub> + ... + a<sub>n</sub>v<sub>n</sub> = 0 

è:
* a<sub>1</sub> = a<sub>2</sub> = ... = a<sub>n</sub> = 0

al contrario l'insieme dei vettori è linearmente dipendente se non è linearmente indipendente, cioè se a<sub>1</sub> = a<sub>2</sub> = ... = a<sub>n</sub> = 0 non è l'unica soluzione dell'equazione

proprietà:
* se un insieme C contiene un insieme LD, allora C è LD
* se un insieme C è contenuto in un insime LI, allora C è LI