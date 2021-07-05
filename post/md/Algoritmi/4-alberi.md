
# Strutture ad albero

**Alberi binari di ricerca (BST)**

sono alberi i cui nodi hanno a sinistra chiavi minori e a destra chiavi maggiori o uguali

ogni nodo x è così formato:
* x.k --> è la chiave
* x.p --> punta al padre
* x.left --> punta al figlio sx
* x.right --> punta al figlio destro

**stampa infissa BST**

la stampa di un BST avviene per ordine infisso, cioè prima il sottoalbero siistro, poi il nodo e poi il sottoalbero destro (di base stampa in ordine crescente)

```
infisso(x)
    if(x != nil)
        infisso(x.left)
        stampa(x.key)
        infisso(x.right)

```

**successore infisso BST**

ritorna il nodo successivo ad x in una stampa infissa

```
successore-infisso(x)
    if(x.right != nil)
        return min(x.right)
    y = x.p
    while (y != nil and x == y.right)
        x = y
        y = y.p
    return y;
}
```


**ricerca BST**

la ricerca prende un nodo e una chiave da ricercare

```
ricerca(x,k)
    if(x = nil or x.key = k)
        return x
    if(x.key < k)
        return ricerca(x.left, k)
    else
        return ricerca(c.right, k)
```

**min e max BST**

nodi con chiave minima e massima

```
min(x)
    if(x.left = nil)
        return x
    max(x.left)

max(x)
    if(x.right = nil)
        return x
    max(x.right)
```

**inserimento BST**

```
inserisci(x, y)
    if(x != nil)
        if(x.key > y.key)
            inserisci(x.left, y)
        else
            inserisci(x.right, y)
    if(x.key > y.key)
        x.left = y
    else
        x.right = y
```

**rimozione BST**

ci sono 3 casi:
* x non ha figli
    * si rimuove x
* x ha un solo figlio
    * si rimuove x
    * x.p diventa padre di x.figlio
* x ha 2 figli
    * si rimuove il successivo-infisso di di x
    * x.key = succ-infisso.key

**transplant**

sposta la nodo radice di un sottoalbero con un'altro nodo

```
trasplant(T, x, y)
    if(x.p = nil)
        T.root = y
    else
        if(x = x.p.left)
            x.p.left = y
        else
            x.p.right = y
    if(y != null)
        y.p = x.p
```

**rotazione BST**

dati due nodi adiacenti, immagina di ruotare iun senso orario/antiorario l'arco in mezzo, mantenendo le condizioni di BST
```
left-rotate(T, x, y)
    x.right = y.left
    x.right.p = x
    y.left = x
    x.p = y
    transplant(T, x, y)
```

**alberi rosso-neri RBT**

sono BST, che rispettano le seguenti condizioni:
* ogni nodo è o rosso o nero
* la radice è nera
* le foglie sono nere
* se un nodo rosso i figli devono essere neri
* l'altezza nera di un nodo deve essere uguale per ogni foglia
    * l'altezza nera è il numero di nodi neri da un nodo (non incluso) ad una foglia