# SQL

formato da costrutti:
* DDL -->
* DML -->

## costrutti

**Creazione di una tabella**

sintassi:
```SQL
CREATE TABLE *nomeTabella*
{
    <attributo1> <tipo> <vincoli-intra>,
    <attributo2> <tipo> <vincoli-intra>,
    .
    .
    .
    <aatributoN> <tipo> <keywords>

    <vincoli-inter>
}
```

esempio:
```SQL
CREATE TABLE Impiegato
{
    Matricola   CHAR(6)     PRIMARY KEY,
    Nome        CHAR(20)    NOT NULL,
    Cognome     CHAR(20)    NOT NULL,
    Dipart      CHAR(15)    NOT NULL,
    Stipendio   NUMERIC(9)  DEFAULT 0,
    
    Unique(Cognome, Nome)
    FOREIGN KEY(Dipart) REFERENCES Dipartimento(NomeDip),
}
```

**domini elementari**

di base i domini sono i tipi, si chiamano domini perchè specificano un range di valori

* stringhe
    * char(x) --> lunghezza fissa
    * varchar(x) --> lunghezza approssimata
* numerici
    * integer
    * smallint
    * float
* virgola fissa
    * numeric(x,y) --> x interi, y decimali
* data e ora
    * date
    * time
    * timestamp
* logici
    * boolean


**creazione di un dominio**



sintassi:
```SQL
CREATE DOMAIN *nomeDomain* AS <dominio> <vincoli>
```

esempio:
```SQL
CREATE DOMAIN Voto AS SMALLINT 
DEFAULT NULL 
CHECK (value >= 18 AND value <= 30)
```

## vincoli intrarelazionali

sono vincoli che vanno ad coinvolgere gli attributi di una sola tabella

**default**

specifica il valore di default dell'attributo

sintassi:
* *nome* *tipo* DEFAULT *valore_default*

**not null**

i valori di quel attributo non possono essere nulli

sintassi:
* *nome* *tipo* NOT NULL

**unique**

i valori di quel attributo devono essere tutti diversi

sintassi 1:
* *nome* *tipo* UNIQUE

sintassi 2:
* UNIQUE(*attr1*,*attr2*,...,*attrn*)

la prima sintassi lega il unique ad un solo attributo la seconda è diversa, impone che non esistano tuple uguali formate dagli attributi specificati

**primary key**

l'attributo è la chiave della tabella

sintassi:
* *nome* *tipo* primary key

oppure:
* primary key(*attr1*)

**check**

vincolo generico condizionale

## vincoli interrelazionali

sono vincoli che coinvolgono più tabelle

**foreing key**

l'attributo è la chiave esterna

sintassi 1:
* *nome* *tipo* REFERENCES *Tabella_esterna(chiave_primaria)*

sintassi 2:
* FOREIGN KEY (*attr1*,*attr2*,...,*attrn*) REFERENCES *Tabella_esterna(*attr1*,*attr2*,...,*attrn*)*

prima sintassi lega i valori degli attributi specificati

la seconda lega le tuple degli attributi specificati

## politiche di reazione

determina come si deve comportare il database quando si esegue una delete o un update, servono a mantenere coerenza tra chiavi e chiavi esterne

sintassi:
* on *delete/update* *azione*

**politiche di delete**

le azioni che il dbms può prendere sono:
* cascade --> elimina anche tutte le chiavi esterne ricorsivamente
* set null --> imposta a null l'attributo referente alla tupla cancellata 
* set default --> imposta il valore di default all'attributo referente alla tupla cancellata 
* no action (default) --> non si può cancellare una tupla referenziata

## DML

**select ... from ...**

proietta gli attributi di una relazione

di default NON rimuove multipli

* l'asterisco proietta tutta la tabella
* 'AS' rinomina un attributo/relazione
* distinct rimuove multipli risultanti 

**where**

applica una condiziona alle tuple

pattern matching:
* '-' --> qualsiasi carattere
* % --> qualsiasi sequenza di caratteri anche vuota

gestione dei null
* qualsiasi confrono con null è sempre false
* is null --> true se è null

**order**

ordina una tabella in seocondo un certo attributo

**aggregati**

operatori:
* count(...) --> numero di tuple risultanti
* sum(...)
* avg(...)
* max(...)
* min(...)

questi operatori agiscono sulle relazioni, se si passa una colonna ne fanno prima la proiezione e poi calcolano il risultato, quindi tutti gli operatori aggregati ignorano il NULL

**group by**

è un operatore di raggruppamento, di base prende una colonna, raggruppa e raggruppa i valori uguali, gli operatori aggregati vengono eseguiti su ogni raggruppamento in modo distinto

**having**

è letteralmente l'operatore where, ma applicato sui raggruppamenti di group by

**union**

unisce due tabelle che con colonne dello stesso tipo, se si usa union all si uniscono anche tuple uguali

**except**

fa la differenza tra 2 tabelle

**intersect**

fa l'intersezione, equivale ad un join

**query annidate**

si possono fare query annidate negli argomenti di operatori che accettano relazioni (praticamente ovunque)

**exists**

restituisce true se una sottoquery non è vuota

**vincoli di integrità generici**

sono dei vincoli che si applicano solo a tuple

**viste**

di base sono delle query

```sql
CREATE VIEW nomeView(attr1.attr2...) AS
SELECT attr1,attr2,..
FROM tabella
WHERE condizione

// opzionale, consente modifiche alla vista a patto che rispetti le condizioni della vista
WITH CHECK OPTION
```

il numero di attributi della view e della query deve essere uguale

**coalesce**

restituisce il primo valore non nullo nei suoi parametri

* coalesce(attr1, 0) --> sostituisce null con 0

**nullif**

restituisce null se il suo parametro ètrue

**controllo dell'accesso**

privilegi:
* insert
* update
* delete
* select
* references --> definizione di vincoli di integrità referenziale
* usage --> utilizzo di una risorsa

```sql
GRANT SELECT ON tabella TO PUBLIC 
GRANT ALL PRIVILEGES ON tabella TO Manuel
GRANT INSERT PRIVILEGES ON tabella TO Tom
```

## Progettazione di una base di dati

1. studio di fattibilità
    * costi
    * priorità
2. raccolta e analisi dei requisiti
    * proprietà del sistema
3. **progettazione**
    * funzionalità
    * dati manipolati
4. realizzazione
5. validazione e collaudo
    * si verificano le funzionalita
6. funzionamento

### Progettazione

è formata da:
1. progettazione concettuale
    * schema concettuale ER
2. progettazione logica
    * schema logico
3. progettazione fisica --> non ci riguarda

**modello entità relazione**

formato da:
* entità --> tabelle
    * attributi --> colonne
* relazioni --> tabelle che hanno le foreign key negli attrbuti

documentazione:
* dizionario dei dati
    * entità
    * relazioni
* vincoli non esprimibili in ER
    * ad esempio i capi hanno stipendi più alti degli impiegati

costruzione:
1. analisi dei requisiti
    * eliminare ambiguità
    * glossario termini
2. passo base
    * schema con concetti più rilevanti
3. passo iterativo
    * raffinare i concetti
    * aggiungere e specificare concetti
5. analisi di qualità
    * verfica e modifica dello schema
     
**cardinalitò**

è una coppia di numeri (a,b) associati ad ogni entità che partecipa ad una relazione, dove:
* a --> numero minimo di occorrenze
* b --> numero massimo di occorenze

es.
* impiegato(2,5)---assegnamento---(0,50)incarico
    * ogni impiegato può avere minimo 2 e massimo 5 incarichi
    * ogni incaricopuò avere nessuno o massimo 50 impiegati

come mettere le cardinalità:
* clicco sulla prima entità
* si apre una finestra che mostra quante seconde entità si possono vedere

tipi di relazione:
* uno a uno (1,1) oppure (0,1)
* uno a molti (1,n)
* molti a molti (n,n)

**generalizzazione**

consiste nel creare un'entitò da cui altre entità derivano gli attrbuti

2 tipi:
* totale --> ogni occorrenza dell'entità genitore è anche di una delle enetità figlie
* parziale --> ci sono occorrenze del genitore che non appartengono a nessun figlio

esempio generalizzazione totale:
* persona
    * uomo
    * donna

ogni persona è anche una delle 2 entità figle

esempio generalizzazione parziale:
* persona
    * avvocato
    * dottore

**part of**

un entità ha la relazione come attributo

**instance of**

è il part of, ma la seconda entità è una particolare istanza della prima 

**Progettazione Logica**

1. analisi delle ridondanze
    * attributi derivabili
    * relazioni derivabili
2. eliminazione delle generalizzazioni
3. partizionamento/accorpamento di entità e relazioni
4. scelta delle chiavi primarie