### Rappresentazione geometrica di un vettore

un vettore R<sup>2</sup> è rappresentabile graficamente in un piano cartesiano, facendo corrispondere i suoi coefficenti con le coordinate del piano, il vettore è un segmento con estremi origine e il punto individuato

**regola del parallelogramma**

la somma di 2 vettori è rappresentabile graficamente con la regola del parallelogramma

---

### Norma di un vettore

**norma taxi driver**

si indica con \|\|v\|\|<sub>1</sub>

calcola la somma dei moduli dei coefficenti del vettore

**norma euclidea**

si indica con \|\|v\|\|<sub>2</sub>

calcola la lunghezza del vettore, c
per calcolare la lunchezza euclidea di un vettore:
* radice(v<sup>t</sup>v) --> per coefficenti reali
* radice(v<sup>h</sup>v) --> per coefficenti complessi (funziona anche per i reali in quanto il coniugato di un reale è il reale stesso)

la lunghezza di una somma tra vettori è sempre minore o uguale alla somma delle lunghezze dei vettori, **disuguaglianza triangolare**

**norma infinito**

si indica con \|\|v\|\|<sub>inf</sub>

calcola il massimo dei coefficenti del vettore

**\|\|v\|\|<sub>inf</sub> <= \|\|v\|\|<sub>2</sub> <= \|\|v\|\|<sub>1</sub>** --> si osserva facilmente

---

**Angoli tra vettori**

dati 2 vettori v e w non nulli ed un angolo alfa associato:
* v<sup>t</sup>w = \|\|v\|\|<sub>2</sub>\*\|\|v\|\|<sub>2</sub>\*cos(alfa)

da cui:
* cos(alfa) = v<sup>t</sup>w / ( \|\|v\|\|<sub>2</sub>\*\|\|v\|\|<sub>2</sub> )

**prodotto scalare**

posto v<sup>t</sup>w == \(v \| w\)

allora \(v \| w\) si chiama prodotto scalare ed è tale per cui:
* \(v \| w\) = coniugato \(w \| v\)
* \(v \| k1w + k2z\) = k1\(v \| w\) + k2\(v \| z\)
* \(v \| v\) è sempre maggiore uguale a 0

**spazio metrico**

è uno spazio vettoriale su cui è definito il prodotto scalare

**norma indotta**

calcola la radice del prodotto scalare tra v e se stesso

**generalizzazione del coseno tra due vettori**

* cos v<sup>^</sup>w = \(v\|w\) / \|\|v\|\|<sub>2</sub>\*\|\|v\|\|<sub>2</sub>

**vettori ortogonali**

v è ortogonale a w sse il prodotto scalare tra v e w è uguale a 0

**insiemi di vettori ortogonali**

un insieme di vettori si dice ortoganale se tutti i vettori dell'insieme sono ortogonali tra loro

es: l'insieme delle colonne della matrice identica

**normalizzazione**

significa moltiplicare v per l'inverso della sua norma, cioè v\*(1/\|\|v\|\|)

**insiemi di vettori ortonormali**

un insieme di vettori si dice ortonormale se:
* è ortogonale
* (vi|vi) == 1 

**insiemi di generatori ortogonali**

autoesplicativo

**insiemi di generatori ortonormale**

autoesplicativo

**ibasi ortogonali**

autoesplicativo

**basi ortonormale**

autoesplicativo