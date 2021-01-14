# Algebra relazionale

L'algebra relazionale è un linguaggio matematico di query, ha 6 operatori di base e diversi operatori derivati

operatori primitivi:
* binari
    * unione
    * differenza
    * prodotto cartesiano
* unari
    * selezione
    * proiezione
    * ridenominazione

operatori derivati:
* intersezione
* join
    * inner
    * left
    * right
    * full
    * semi
    * theta
    * equi

## Operatori primitivi

### Binari

questi operatori sono ricavati dalle normali operazioni insiemistiche

**unione**

ritorna una relazione che contiene le tuple appartenenti ad entrambe le relazioni, senza ripetizioni

**differenza**

ritorna una relazione che contiene le tuple della prima relazione che non appartengono alla seconda

**prodotto cartesiano**

ritorna una relazione che contiene il prodotto cartesiano delle tuple delle 2 relazioni, il prodotto cartesiano delle relazioni di base è un grafo bipartito completo, ogni tupla connette con tutte le tuple dell'altra relazione

### Unari

**selezione**

ritorna una relazione che contiene le tuple che rispettano una determinata condizione sugli attributi

**proiezione**

ritorna una relazione con solo gli attributi specificati, rimuove le ripetizioni

**ridenominazione**

ritorna una relazione con attributi di nome diverso

## Operatori derivati

**intersezione**

ritorna una relazione che contiene le tuple in comune ad entrambe le relazione, si ricava come !(A-B)

**inner join**

fa il prodotto cartesiano e seleziona le tuple che hanno 2 attributi specificati uguali

numero di tuple finali:
* 0 (join vuoto) <= R1 join R2 <= R1 x R2 (join completo)

**left join**

è l'inner join, ma se una tupla della prima relazione non matcha viene inserita comunque

**right join**

è l'inner join, ma se una tupla della seconda relazione non matcha viene inserita comunque

**full outer join**

è l'unione del left e right join

**semi join**

fa un normale inner join, ma proietta solo gli attributi della prima tabella

**theta-join**

fa il prodotto cartesiano e seleziona le tuple che rispettano una condizione theta

**equi-join**

è il theta join che usa l'operatore di uguaglianza nella condizione

**gestione dei valori nulli**

per rifersi ai valori nulli in una selezione si utilizzano le condizioni:
* is null
* is not null