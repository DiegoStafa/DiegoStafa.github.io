### Probabilità condizionata

dato uno spazio di probabilità, e due eventi E(evento) ed F(evento condizionante), allora la probabilità condizionata di E dato F è:
* P(E \| F) = P(E&F)/P(F)

P(evento | condizione) = P(evento & condizione) / P(condizione)

di base indica la probabilità di un evento quando prima se ne è verificato un altro

ha la forma di P(evento, evento_condizione)

**formula delle probabilità totali**

dato uno spazio di probabilità, un evento E ed una partizione di k eventi F<sub>k</sub>, allora:
* P(E) = P(E|F<sub>1</sub>)P(F<sub>1</sub>) + P(E|F<sub>2</sub>)P(F<sub>2</sub>) + ... + P(E|F<sub>k</sub>)P(F<sub>k</sub>)

si legge come:
* la probabilità di un evento è uguale al prodotto tra la probabilità condizionata e la probabilità della condizione

**formula di bayes**

dalla formula della probabilità condizionata, si ricava che:
* P(F|E)P(E) = P(E|F)P(F)

**incompatibilità tra 2 eventi**

2 eventi E ed F sono incompatibile se non possono accadere contemporaneamente, quindi:
* P(E & F) = 0

**indipendenza tra 2 eventi**

2 eventi E ed F sono indipendenti se:
* P(E&F) = P(E)P(F)

che equivale a:
* P(E|F) = P(E)
* P(F|E) = P(F)

indipendenza != incompatibilità

**indipendenza generale**

di base un insieme di n eventi è indipendente se ogni possibile sottoinsieme è indipendente

proprietà:
* l'indipenza rimane se sostituendo uno o più eventi con i loro complementari
