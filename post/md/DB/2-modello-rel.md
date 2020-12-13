## Indice
1. [Algebra Relazionale](#Algebra-relazionale)
2. [SQL](#SQL)
3. [Chiavi](#Chiavi)

## Algebra relazionale

il modello relazionale si basa sul modello di relazione matematica

proprietà:
* le colonne sono associate ad un attributo (non presente nelle relazioni matematiche)
* l'ordine delle righe non conta
* l'ordine delle colonne non conta
* ogni tupla è diversa


**relazione matematica**

dati D<sub>1</sub>, D<sub>2</sub>, ... , D<sub>n</sub> e il prodotto cartesiano K = D<sub>1</sub> x D<sub>2</sub> x ... x D<sub>n</sub> allora una relazione matematica è un qualsiasi sottoinsieme di K


**relazione**

def1nizione di relazione (tabella):
* R(A<sub>1</sub>,...A<sub>n</sub>)

dove:
* R --> tabella
* A --> colonna 

**base di dati**

definizione di schema di base di dati:
+ S = {R<sub>1</sub>(X<sub>1</sub>),...R<sub>n</sub>(X<sub>k</sub>)}

dove:
* S --> schema del database
* R --> tabella
* X --> colonne della tabella

di base lo schema del database è un insieme di tabelle con le relative colonne e dominii delle colonne

**tuple**

le tuple sono le righe di una tabella, sono delle funzioni che per dominio hanno gli attributi della tabella (colonne) e per codominio hanno il dominio degli attributi

**istanza di una relazione**

è l'insieme delle tuple di una relazione

**istanza di una base di dati**

è l'insieme di tutte le istanze di relazioni della base di dati

## Vincoli

**informazione incompleta**

quando un valore è assente in una tabella il dbms insierisce NULL, che è un valore speciale

**vincolo di integrità**

è una funzione booleana sull'istanza della base di dati

i vincoli di intergrita possono essere:
* supportati --> il dbms si occupa di far rispettare i vincoli
* non supportati --> implementati lato server

tipi di vincoli:
* vincoli intrarelazionali
    * vincolo sui valori --> impone un vincolo su una colonna
    * vincolo di tupla --> coinvolge più colonne
    * vincolo di chiave --> tutti valori univoci
* vincoli interrelazionali
    * integrità referenziale

## Chiavi

**superchiave**

è un qualsiasi gruppo di attributi che identifica univocamente una tupla

definizione formale:
* K = (k1,k2,...,kn)
* se t1 != t2 allora esiste t1\[k\] != t2\[k\] con k appartenente a {k1,k2,..kn}

dove:
* K --> superchiave
* k --> attributo
* t --> tupla

di base vuol dire che se 2 tuple son diverse allora esiste un attributo della superchiave che ha diversi valori nelle 2 tuple

**chiave**

è una superchiave che non contiene attributi superflui

è la più piccola superchiave (quella che utilizza meno attributi)

**chiave primaria**

è una chiave che non ammette valori nulli

**chiave esterna**

sono attributi collegati a chiavi primarie di un'altra tabella (integrità referenziale)

problemi:
* eliminazione di una tupla referenziata da una chiave esterna

soluzioni:
* rifiuto dell'eliminazione
* eliminazione in cascata dei dangling reference
* valori nulli

## SQL

SQL è il linguaggio dichiarativo per i sistemi dbms, viene utilizzato per diverse operazione, si possono categorizzare i comandi sql in 2 gruppi:
* DML --> operazioni sulle istanze
* DDL --> operazioni sugli schemi

**DML**

siccome i modelli relazionali si appoggiano al concetto di matematica di relazione le operazioni DML di base le normali operazioni insiemistiche:
* ridenominazione
* unione
* differenza
* intersezione
* prodotto cartesiano
* selezione
* proiezione
* join

**operatore di ridenominazione**

restituisce una tabella con attributi rinominati

input:
* R<sub>1</sub>(..., x<sub>i</sub>...)
* y<sub>i</sub> <-- x<sub>i</sub>

output:
* R<sub>2</sub> = R<sub>1</sub>(..., y<sub>i</sub>...)

sintassi:
* 

**operatore di unione**

date 2 tabelle simili, restituisce una tabella con gli stessi attributi e con l'unione delle loro tuple, rimuove i duplicati

input:
* R<sub>1</sub>
* R<sub>2</sub>
* condizione: R<sub>1</sub> e R<sub>2</sub> hanno stesso schema

output:
* R<sub>3</sub> = R<sub>1</sub> + R<sub>2</sub>

sintassi:
* 

**operatore di differenza**

date 2 tabelle simili, restituisce una tabella con gli stessi attributi e con la differenza delle loro tuple

input:
* R<sub>1</sub>
* R<sub>2</sub>
* condizione: R<sub>1</sub> e R<sub>2</sub> hanno stesso schema

output:
* R<sub>3</sub> = R<sub>1</sub> - R<sub>2</sub>

sintassi:
* 

**operatore di intersezione**

date 2 tabelle simili, restituisce una tabella con gli stessi attributi e con l'intersezione delle loro tuple

input:
* R<sub>1</sub>
* R<sub>2</sub>
* condizione: R<sub>1</sub> e R<sub>2</sub> hanno stesso schema

output:
* R<sub>3</sub> = R<sub>1</sub> & R<sub>2</sub>

sintassi:
* 

**operatore di join naturale (prodotto cartesiano)**

date 2 tabelle, restituisce una tabella formata dagli attributi di entramne e dal prodotto cartesiano delle loro tuple, rimuove duplicati

input:
* R<sub>1</sub>
* R<sub>2</sub>

output:
* R<sub>3</sub> = R<sub>1</sub> x R<sub>2</sub>


**operatore di selezione**

data una relazione R e una condizione C, restituisce una relazione formata dalle tuple di R che rispettano C

sintassi:
* 

**operatore di proiezione**

data una relazione R e un insieme di attributi A, restituisce una relazione formata da R senza gli attributi specificati, eventualmente può rimuovere tuple duplicate risultanti

proiettare su una superchiave mantiene sempre lo stesso numero di tuple, non è garantito il contrario

sintassi:
* 

**operatore di inner join**

date 2 tabelle aventi 1 attributo in comune, restituisce una tabella formata dagli attributi di entrambe le tabelle e tuple che hanno valori uguali nell'atributo in comune

input:
* R<sub>1</sub>
* R<sub>2</sub>
* attr<sub>1</sub>
* attr<sub>2</sub>
* condizione: attr<sub>1
 
output:
* o<sub>attr<sub>1</sub> = attr<sub>2</sub>(R1 x R2) 

si dice join vuoto se il risultato è una tabella vuota

si dice join completo se dalla tabella risultante si può ritornare alle 2 tabelle utilizzate

in generale, la cardinalità del join è:
* 0 <= R1 join R2 <= R1 x R2

sintassi:
* 

**operatore di left join**

è il join solo che se nella prima tabella una tupla non ha match nella seconda, non viene eliminata, ma si impostano a null i suoi attributi della seconda

sintassi:
* 

**operatore di right join**

contrario del left, si mettono a null gli attributi della prima tabella se una tupla della seconda non ha match

sintassi:
* 

**operatore di full join**

mette a null gli attributi della seconda se la prima non ha match e mette a null gli attributi della prima se la seconda non ha match

non perde informazioni

sintassi:
* 

**operatore di semi join**

fa un normale inner join, ma tiene (proietta) solo gli attributi della prima tabella

sintassi:
* 

**operatore di natural join**

è letteralmente un diverso modo di chiamare il prodotto cartesiano

sintassi:
* 

**operatore di theta-join**

è il natural join a cui viene applicata una condizione degli attributi

sintassi:
* 

**operatore di equi-join**

è il theta join che usa l'operatore di uguaglianza nella condizione

**regole di equivalenza**

sono regole logiche che il dbms utilizza internamente per ottimizzare le query che deve eseguire, ciò implica che il dbms non esegue quasi mai query nel modo in cui queste vengono formulate

**gestione dei valori nulli**

per rifersi ai valori nulli in una selezione si utilizzano le condizioni:
* is null
* is not null

**viste virtuali**

di base una vista è una tabella ritornata da una query

esempio:
* Afferenza(impiegato, reparto)
* Direzione(reparto, capo)

la vista "Supervisione" è:

select impiegato,capo
from (Afferenza join Direzione) as Supervisione

motivazioni:
* servono schemi esterni per utenti diversi
* consente un sistema di autorizzazioni
* semplifica le query

quando si modifica una vista non sempre si può aggiornare la base di dati correttamente, è garantito solo se la vista è data da un join completo

**viste materiallizzate**

di base una vista materializzata è una vista che viene salvata su disco

vantaggi:
* disponibilità immediate per future query

svantaggi:
* ridondanza
* consistenza dei dati
* raramente supportate dai dbms