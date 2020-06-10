### Foreste e alberi

**foreste**

una foresta è un grafo senza cicli/circuiti

**alberi**

è una foresta connessa

proprietà:
* ogni albero (con almeno 2 nodi) ha almeno 2 nodi di grado 2
* il numero degli archi == numero dei nodi meno 1
* ogni coppia di vertici esiste un unico cammino che li collega

**algoritmo di kruskal**

dato un grafo senza nodi, la cui creazione di archi ha un costo, crea l'albero di costo minore

di base crea tutti i possibili alberi e poi sceglie quello di costo minore

per creare un albero
1. connette due nodi con un arco a caso