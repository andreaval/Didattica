# Cos’é un algoritmo

## Risolutore ed esecutore
## Fasi di risoluzione di un problema
## L’analisi del problema
### Input
### Output
### Strategia risolutiva
## Progettazione dell’algoritmo
## Codifica dell’algoritmo

# Scrivere un algoritmo

## Formalismi per la scrittura di algoritmi
## I flowchart
### Elementi di un flowchart
### Regole per la costruzione di un flowchart
## La sequenza
## Operatori matematici
### Operatore modulo
## Le variabili
### Dominio di una variabile
### Dichiarazione
### Inizializzazione
### Operatore di assegnazione
## Espressioni logiche
### Operatori logici
### Operatori relazionali
## La selezione
### Selezioni con rami vuoti
### Selezioni annidate
## Operatore di concatenazione
## Prioritá tra gli operatori
### Operatori binari ed unari
## L’iterazione
**N.B.** Per convenzione, in un'iterazione, la variabile contatore si indica con la lettera **i**

**N.B. 2** Se in un'iterazione si fa uso di un contatore bisogna <u>sempre</u> ricordarsi di inizializzarlo prima dell'inizio dell'iterazione e di  *incrementarlo o decrementarlo* (a seconda del tipo di contatore) all'interno del clico.

### Iterazioni indefinite 
#### Pre-condizionali
#### Post-condizionali
### Iterazioni definite
### Iterazioni annidate 
**N.B.** Per convenzione una variabile contatore di un’iterazione annidata si indica con la lettera **j**
## Teorema di Bohm-Jacopini
## Le funzioni
### Vantaggi di utilizzo
### Creare una funzione
### Paramettri formali
### Invocazione e parametri attuali
## Gli array

> **Array:** un array (*/əˈreɪ/*), è un insieme ordinato e omogeneo di variabili. Ordinato perchè le variabili sono disposte in un ordine ben preciso e omogeneo perchè le variabili devono essere tutte dello stesso tipo. 

> **Elemento di un array:** ogni variabile che fa parte dell'array prende il nome di elemento di un array.

> **Indice (o posizione) di un elemento:** è un valore numerico che indica la posizione esatta dell'elemento all'interno dell'array. Ad ogni indice corrisponde uno ed un solo elemento. 

![Struttura di un array](images/Array01.png)

Nella maggior parte dei linguaggi di programmazione al primo elemento di un array viene assegnata la posizione **0** (zero) e <u>non</u> 1.  Anche in questo testo verrà seguita questa convenzione.

> **Dimensione di un array:** numero di elementi che compongono l'array.

Un array di dimensione **n** ($n \in \mathbb{ N_{0} }$) è un array composto da **n** elementi dove il primo elemento avrà indice **0** mentre l'ultimo avrà indice **n-1** .

**N.B.** ogni posizione dell'array da 0 a n-1 viene assegnata ad una variabile. <u>Non esiste</u> una posizione non assegnata.

Per identificare un elemento dell'array si utilizza la seguente notazione: 
$$
\huge{A[0]} \\ \small {(elemento \, dell'array \,A\, in\, posizione \,0)}
$$
Dove **A** rappresenta il nome dell'array e **[0]** la posizione dell'elemento racchiusa tra parentesi quadre. 