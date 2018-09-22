# Cos’é un algoritmo

> **Algoritmo:** in inglese *algorithm (/ˈælɡəˌrɪðəm/)*, procedimento che risolve un determinato problema attraverso un numero finito e ordinato di passi (azioni, istruzioni).

## Risolutore ed esecutore

Il computer ha due importanti caratteristiche: il calcolo e la memorizzazione. Rispetto alla mente umana è in grado di svolgere calcoli in maniera enormemente più rapida ed è in grado di memorizzare una quantità di dati teoricamente illimitata. Tuttavia il computer ha un grande limite: non è in grado di pensare in maniera autonoma; questo significa che **non può** risolvere problemi per cui non è stato programmato.

> **Il computer risolve unicamente problemi che l'uomo ha già risolto.**Tuttavia lo fa in maniera rapida e precisa, in tempi, in genere, brevissimi.

Il computer è dunque un semplice ESECUTORE di istruzioni che gli sono state impartite da una determinata persona chiamata RISOLUTORE. Entrambe le figure sono indispensabili per la risoluzione rapida e corretta di un problema.

 L'ESECUTORE senza il RISOLUTORE non potrebbe mai risolvere un problema perchè non conosce la corretta sequenza di istruzioni da svolgere. Al tempo stesso anche Il RISOLUTORE senza l'ESECUTORE potrebbe non arrivare mai alla soluzione perchè potrebbe impiegare un tempo enorme per svolgere i calcoli richiesti.

> **Programmatore:** persona che insegna al computer a saper fare qualcosa

$$
\text{Programmatore} \ne \text{Utente del computer}
$$

> **Utente del computer:** colui che utilizza il computer, che sa fare qualcosa con esso 



## Fasi di risoluzione di un problema

![Algoritmi10](images/Algoritmi10.png)

| 1. ANALISI                           | 2. ALGORITMO                                              | 3. CODIFICA                                                 |
| ------------------------------------ | --------------------------------------------------------- | ----------------------------------------------------------- |
| Identificare i dati in **INPUT**     | Creare l'**algoritmo**                                    | Scrittura del **codice** in un linguaggio di programmazione |
| Identificare i dati in **OUTPUT**    | Verificare correttezza dell'algoritmo tramite **tracing** | **Compilazione** del codice                                 |
| Trovare una **strategia risolutiva** |                                                           | **Testing** del codice                                      |



## L’analisi del problema


### Input

### Output
### Strategia risolutiva
## Progettazione dell’algoritmo


## Codifica tramite linguaggio di programmazione

# Scrivere un algoritmo

L'algoritmo si rappresenta in genere tramite il formalismo grafico del **Flow chart** (/fləʊ tʃɑːt/) (in italiano Diagramma di flusso)

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

> **Lunghezza di un array:** numero di elementi che compongono l'array.

Un array di lunghezza **n** ($n \in \mathbb{ N_{0} }$) è un array composto da **n** elementi dove il primo elemento avrà indice **0** mentre l'ultimo avrà indice **n-1** .

**N.B.** ogni posizione dell'array da 0 a n-1 viene associata ad una variabile. <u>Non esiste</u> una posizione non associata ad uno spazio di memoria.

Per identificare un elemento dell'array si utilizza la seguente notazione: 
$$
\huge{A[0]} \\ \small {(elemento \, dell'array \,A\, in\, posizione \,0)}
$$
Dove **A** rappresenta il nome dell'array e **[0]** la posizione dell'elemento racchiusa tra parentesi quadre. 

# Esercizi
## Prove di competenza
### Auto o bici?
Il professore di matematica per venire a scuola può usare la bicicletta o l’automobile. In bicicletta va a una velocità di 20 km/h; in automobile va a una velocità di 30 km/h ma ha bisogno di 20 minuti per parcheggiare. Che mezzo gli conviene prendere?
Matematica: *Determinare per quale distanza T conviene prendere un mezzo o l’altro*
Informatica: *Creare un algoritmo che, ricevendo in input la distanza T, indica all’utente quale mezzo utilizzare*
Informatica2: *Rispetto all’algoritmo precedente fornire in input anche le velocità dei mezzi e i tempi di parcheggio*
Matematica+Informatica: *Creare un algoritmo che date in input le velocità dei mezzi determini per quale distanza T conviene prendere uno o l’altro mezzo.*