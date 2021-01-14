# Progettazione di una base di dati

**fasi tecniche**

1. studio di fattibilità --> costi e priorità
2. raccolta e analisi dei requisiti --> proprietà del sistema
3. progettazione --> funzionalità e dati manipolati
4. realizzazione
5. validazione e collaudo --> verfica delle funzionalità
6. funzionamento

## Progettazione

è formata da:
1. progettazione concettuale --> diagramma ER
2. progettazione logica --> schema logico 
3. progettazione fisica --> indici

### Progettazione concettuale

**modello ER**

è il modello concettuale più utilizzato, formato da:
* entità --> rappresentano classi di oggetti
* relazioni --> rappresentano legami logici tra entità

ed altri costrutti:
* attributi
* cardinalità
* identificatore
* generalizzazione

convenzione:
* entità e relazioni sono sostantivi singolari

documentazione:
* dizionario dei dati
    * entità
    * relazioni
* vincoli non esprimibili in ER
    * ad esempio i capi hanno stipendi più alti degli impiegati

**part of**

un entità ha la relazione come attributo

**instance of**

è il part of, ma la seconda entità è una particolare istanza della prima 

**attributo**

è una proprietà che un entità od una relazione puà avere, ci sono attributi semplici e composti

**cardinalitò di relazione**

è una coppia di numeri (a,b) associati ad ogni entità che partecipa ad una relazione, dove:
* a --> numero minimo di occorrenze
* b --> numero massimo di occorenze

es.
* impiegato(2,5)---assegnamento---(0,50)incarico
    * ogni impiegato può avere minimo 2 e massimo 5 incarichi
    * ogni incaricopuò avere nessuno o massimo 50 impiegati

tipi di relazione:
* uno a uno (1,1) oppure (0,1)
* uno a molti (1,n)
* molti a molti (n,n)

**cardinalità di attributi**

si associa una coppia di valori agli attributi che indicano:
* opzionalità --> (0,1)
* attributi multivalore --> (0,n)

**identificatore**

è usato per identificare univocamente le istanze di un'entità, si dividono in:
* identificatori interni --> 1 o più attributi di un'entità
* identificatiri esterni --> 

**generalizzazione**

consiste nel creare un'entitò da cui altre entità derivano gli attributi, ce ne sono 2 tipi:
* totale --> il genitore è sempre uno dei figli
* parziale --> il genitore può non essere uno dei figli

esempio generalizzazione totale:
* persona
    * uomo
    * donna

esempio generalizzazione parziale:
* persona
    * avvocato
    * dottore

#### documentazione diagramma ER

è formata da:
* dizionari entità e relazioni
* vincoli non esprimibli nel diagramma

**dizionario entità**

è una tabella con le seguenti colonne:
* entità
* descrizione
* attributi
* identificatore

**dizionario relazioni**

è una tabella con le seguenti colonne:
* relazioni
* descrizione
* componenti --> entità partecipanti
* attributi

### Progettazione logica

consiste nel trasformare un schema concettuale (solitamente ER) in schema logico (solitamente relazionale), per fare ciò si eseguono i seguenti passi:
* analisi delle ridondanze
* eliminazione delle generalizzazioni
* accoppiamento delle entità e relazioni
* scelta degli identificatori

le relazioni e cardinalità si traducono secondo schemi fissati (pdf lezione 8)

**analisi delle ridondanze**

consiste nel decidere se eliminare o meno attributi ricavabili da altri attributi o da relazioni

**eliminazione delle generalizzazioni**

siccome le generalizzazioni non sono rappresentabili, si eliminano, ci sono 3 modi:
* accorpamento delle figlie nel genitore
* accorpamento del gentiore nelle figlie --> preferibile se gli accessi al padre e figlie sono separati
* sostituzione della generalizzazione con una relazione --> preferibile se gli accessi al padre non implicano accesso alle figlie

nel primo caso il padre avrà un attributo aggiuntivo che andrà a specificare di che tipo è
 

**scelta degli identificatori**

consiste nel scegliere le chiavi primarie ed esterne delle entità finali

### Progettazione fisica

si occupa della memorizzazione delle relazioni e della creazione degli indici per velocizzare le operazioni di query

**indici**

consiste nel creare una tabella ausiliaria di indici di tutte le tuple di una tabella, in modo tale da non dover eseguire una ricerca lineare, ma costante

un indice di base è una tabella con 2 colonne:
* chiave
* valore --> punta al dato effettivo

metriche di giudizio:
* tempo di accesso
* tempo di inserimento
* tempo di rimozione
* spazio occupato

si dividono in 2 categorie:
* indici primari
* indici secondari

**implementazione degli indici**

un indice si implementa con un albero binario:
* b+ tree
* b- tree
* file hash

**B+ tree**

sono alberi binari i cui nodi hanno più di un valore

funzionamento:
* nodi non foglia:
    * ogni nodo ha n valori
    * per ogni valore ci sono 2 puntatori
    * il puntatore sinistro punta ad un valore minore
    * il puntatore destro punta ad un valore maggiore
* nodi foglia:
    * n valori
    * per ogni valore c'è 1 puntaore
    * ogni puntatore punta alla tupla della relazione con medesimo valore
    * c'è un puntatore extra che punta alla foglia successiva


vantaggi:
* organizzazione semplice e scalabile ad inserimenti e rimozioni
* le query su intervalli di valori sono molto veloci (si scorrono le foglie)

svantaggi:
* spazio occupato
* tempi extra di inserimento e rimozione

**B- tree**

è come il b+ tree, ma:
* le foglie non sono connesse
* ogni valore in qualsiasi nodo ha un puntatore extra che lo collega alla tupla della relazione

vantaggi:
* meno nodi del b+ tree
* non serve arrivare alla foglia per trovare un valore

svantaggi:
* non danno benefici in query su intervalli di valori
* inserimenti e rimozioni più complesse
* manutenzione più complessa

**file hash**

si crea un file hash nella quale ogni valore ha un hash associato, la ricerca è costante, ma funziona solo in query del tipo variabile=valore