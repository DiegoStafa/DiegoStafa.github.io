# Normalizzazione

## Dipendenze funzionali

**dipendenza funzionale**

un attributo Y dipende funzionalmente da un gruppo di attributi X se X riesce ad identificare univocamente Y, quindi 2 o più tuple di X con gli stessi valori devono avere anche stesso Y

si indica con X --> Y

di base è l'implica logico, una dipendeza funzionale è quando gli attributi X implicano l'atributo Y

le dipendenze funzionali si dividono in:
* banali
* parziali
* complete

**dipendenza funzionale banale**

si ha quando Y compare anche a sinistra, cioè quando:
* Y,X --> Y (y implica y duh) 

di base è una tautologia

**dipendenza funzionale parziale**

si ha quando una dipendenza funzionale rimane togliendo attributi dall'insieme X

di base significa che X contiene attributi superflui

**dipendeza funzionale completa**

si ha quando una dipendenza funzionale non rimane togliendo attributi dall'insieme X

significa che X non ha attributi superflui

**chiusura**

la chiusura di una dipendenza è l'insieme degli attributi che riesce ad implicare

**copertura**

quando due insiemi di dipendenze funzionali su una stessa relazione sono equivalenti 

## Forme Normali

**forma normale**

una base di dati si dice in forma normale quando:
* non c'è ridondanza
* inserimenti, rimozioni e aggiornamenti non creano incosistenze

**prima forma normale**

una relazione è in prima forma normale quando:
* tutti gli attributi sono atomici e non ulteriormente scomponibili

**seconda forma normale**

una relazione è in seconda forma+
* ha solo dipendenze funzionali complete

**terza forma normale**

una relazione è in terza formale normale quando:
* è in seconda forma normale
* per ogni dipendenza funzionale non banale, X è una superchiave, oppure y è un attributo primo (fa parte della chiave)

**forma normale di boyce e codd**

una relazione è in forma normale di boyce e codd quando:
* è in terza forma normale
* per ogni dipendenza funzionale non banale, X è una superchiave

**algoritmo di normalizzazione**

si calcola la chiusura ridotta (o minima):
* si trovano tutte le dipendenze funzionali della relazione
* si spezzano gli implica facendo in modo di avere solo una tesi
    * es. AB --> CDE si spezza in: AB --> C, AB --> D, AB --> E
* si rimuovono le tautologie (dipendenze funzionali banali)
* si semplificano le implicazioni transitive
    * es. A --> B e B --> C deve rimuovere A --> C
* si semplificano le ipotesi
    * es. ABC --> D e A --> C diventa AB --> D e A --> C

si per ogni ipotesi si crea una partizione:
* ogni partizione è formata da ciò che l'ipotesi riesce ad implicare (anche transativamente)
* si costruisce una relazione per ogni partizione