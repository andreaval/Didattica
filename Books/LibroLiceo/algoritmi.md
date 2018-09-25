# Cos’é un algoritmo

L'informatica, tramite l'uso del computer, ci permette di risolvere problemi del mondo reale. Problemi che senza l'uso del computer non sarebbero risolvibili. 

Questo perchè il  computer ha due caratteristiche fondamentali:
$$
\text{CAPACITA' DI CALCOLO}+\text{CAPACITA' DI MEMORIZZARE DATI}
$$
Rispetto alla mente umana è in grado di svolgere calcoli in maniera enormemente più rapida ed è in grado di memorizzare  dati in quantità teoricamente illimitata.

Il computer però ha un grande limite: <u>non è in grado di pensare in maniera autonoma</u>; questo significa che non può risolvere problemi che non conosce, problemi per cui non è stato programmato.

Ha quindi bisogno di qualcuno che gli dica come fare. Questo qualcuno è il <u>programmatore</u> (da con confondere con l'utente generico che utilizza il computer).

> **Programmatore:** in inglese *programmer (/ˈprəʊgræməʳ/)* , *developer (/dɪˈvɛləpə/)*, *software engineer (/ˈsɒftˌwɛə ˌɛndʒɪˈnɪə/)*, persona che insegna al computer a saper fare qualcosa.

$$
\text{Programmatore} \ne \text{Utente del computer}
$$

> **Utente del computer:** in inglese *end user (/ɛnd ˈjuːzə/)*, colui che utilizza il computer, che sa fare qualcosa con esso. 

Il programmatore indica al computer come fare per trovare la soluzione, il computer esegue le istruzioni e risolve il problema. 

> **Il computer risolve unicamente problemi che l'uomo ha già risolto.**Tuttavia lo fa in maniera rapida e precisa.

## Risolutore ed esecutore

Possiamo pensare all'uomo e al computer come a due parti che collaborano insieme per risolvere un problema. In generale queste due figure prendono il nome di RISOLUTORE ed ESECUTORE.



![Algoritmi15](images/Algoritmi15.png)



> In generale, **l'esecutore** è colui che esegue in maniera rigorosa le istruzioni che gli sono state impartite dal RISOLUTORE. 

> In generale, **il risolutore** è colui che risolve un problema trovando la giusta sequenza di istruzioni da svolgere per arrivare alla soluzione.

Come è facile capire, RISOLUTORE e ESECUTORE  sono indispensabili uno all'altro ed entrambi concorrono attivamente alla risoluzione del problema.

*Esempio Apollo 13*

## L'algoritmo

Il risolutore per insegnare correttamente all'esecutore a risolvere il problema, ha bisogno di fornirgli un elenco ordinato e ben preciso di azioni da svolgere. Questo elenco prende il nome di **algoritmo**.

> **Algoritmo:** in inglese *algorithm (/ˈælɡəˌrɪðəm/)*, procedimento che risolve un determinato problema attraverso un numero finito e ordinato di passi (azioni, istruzioni).

Un algoritmo per essere definito tale deve possedere le seguenti caratteristiche:

- finitezza
- non ambiguità
- generalità
- efficienza

## Fasi di risoluzione di un problema

Scrivere un algoritmo per insegnare al computer a "saper fare" qualcosa necessita, in atto pratico, di una serie di operazioni da dover svolgere. L'algoritmo è solo la parte centrale di una serie di attività che permettono al programmatore di risolvere il problema in tutte le sue parti. L'algoritmo viene preceduto da una fase di analisi del problema e viene seguito da una fase di codifica in cui sarà convertito in codice di programmazione per poter dar vita al **software**.

![Algoritmi10](images/Algoritmi10.png)

| 1. ANALISI                            | 2. PROGETTAZIONE                         | 3. CODIFICA                                             |
| ------------------------------------- | ---------------------------------------- | ------------------------------------------------------- |
| Identificazione dati in INPUT         | Progettazione e scrittura dell'algoritmo | Scrittura del codice in un linguaggio di programmazione |
| Identificazione dati in OUTPUT        | Testing dell'algoritmo                   | Compilazione del codice                                 |
| Creazione di una strategia risolutiva |                                          | Testing del codice                                      |

L'analisi produce una **strategia risolutiva** &#8594; in base alla strategia risolutiva si progetta un **algoritmo** &#8594; l'algoritmo viene codificato in un linguaggio di programmazione per ottenere un **software**.

## L’analisi del problema

Svolgere l'analisi del problema significa innanzitutto <u>capire</u> il problema. Una volta capito il problema è possibile identificarne i dati in INPUT e i dati in OUTPUT  e quindi individuare e descrivere un metodo effettivo di soluzione. 

> **Identificare i dati in INPUT:** determinare i parametri del problema.

> **Identificare i dati in OUTPUT:** determinare la o le soluzioni del problema (le incognite).

> **Individuare una strategia risolutiva:** saper modelizzare o descrivere una soluzione che permetta di risolvere il problema in maniera corretta.

*Analisi - Esempio 1*
Problema: date base e altezza di un triangolo determinare l'area.
Soluzione:
$$
Input: b,h \in \R \enspace|\enspace b,h>0\\
Output: Area \in \R \\ 
SR: Area = b*h
$$


*Analisi - Esempio 2*
Problema: date le misure dei lati di un triangolo determinare il tipo di triangolo (scaleno, isoscele, equilatero).
Soluzione:
$$
\begin{align*}
Input:\enspace a,b,c \in \R \enspace|\enspace a,b,c>0\\
Output:\enspace tipo \in \{scaleno,isoscele,equilatero\}\\
SR:\enspace (a=b)\land(b=c) \implies equilatero\\
   \enspace altrimenti \enspace (a=b)\lor(a=c)\lor(b=c) \implies isoscele\\
   \enspace altrimenti \implies scaleno
\end{align*}
$$


*Analisi - Esempio 3*
Problema: dati tre segmenti determinare se con essi sia possibile costruire un triangolo.
Soluzione:
$$
Input: a,b,c \in \R \enspace|\enspace a,b,c>0\\
Output: esito \in \{Vero,Falso\}\\
SR: (a<b+c) \land (b<a+c) \land (c<a+b)
$$

## Progettazione dell’algoritmo

Progettare un algoritmo significa, partendo dall'analisi svolta, creare un elenco di istruzione che implementino la strategia risolutiva e permettano all'algoritmo di funzionare con qualsiasi input fornito. 


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

**N.B.** ogni posizione dell'array da 0 a n-1 viene associata ad una variabile. <u>Non esiste</u> una posizione non associata ad alcuna variabile.

Per identificare un elemento dell'array si utilizza la seguente notazione: 
$$
\huge{A[0]} \\ \small {(elemento \, dell'array \,A\, in\, posizione \,0)}
$$
Dove **A** rappresenta il nome dell'array e **[0]** la posizione dell'elemento racchiusa tra parentesi quadre. 

<u>Esempio:</u> dato un array **A** di interi di lunghezza **4** :

![Array vuoto](images/Array02.png)

l'operazione di assegnazione ${A[1]=3}$  (*assegnazione con indice statico*) inserisce il valore $3$ in posizione $1$:

![Indice statico](images/Array03.png)

l'operazione di assegnazione ${A=3}$ produce un <u>errore</u>, in quanto non è indicata la posizione dell'array in cui inserire il valore.

Data la variabile ${I = 0}$, l'assegnazione ${A[I]=6}$ (assegnazione con indice dinamico), inserisce il valore $6$ in posizione $0$ (in quanto $0$ è il valore corrente della variabile $I$):

![Indice dinamico](images/Array04.png)

l'operazione di assegnazione ${A[I+1]=A[0]+1}$ inserisce il valore $7$ (risultato dell'espressione $A[0]+1$) all'interno dell'elemento in posizione ${I+1}$ ovvero $1$ in quanto $I=0$ .

![Indice dinamico con espressione](images/Array05.png)

> **Inizializzazione di un array:** inizializzare un array significa inizializzare ogni singolo elemento dell'array ad un determinato valore.

Il seguente flowchart, mostra un esempio di inizializzazione di un array di interi composto da 10 elementi. Attraverso un'iterazione precondizionale ogni elemento viene inizializzato al valore **0** (zero).

![Inizializzazione di un array](images/Algoritmo200.png)



### Quando è utile utilizzare un array?



# Esercizi

## Prove di competenza
### Auto o bici?
Il professore di matematica per venire a scuola può usare la bicicletta o l’automobile. In bicicletta va a una velocità di 20 km/h; in automobile va a una velocità di 30 km/h ma ha bisogno di 20 minuti per parcheggiare. Che mezzo gli conviene prendere?
Matematica: *Determinare per quale distanza T conviene prendere un mezzo o l’altro*
Informatica: *Creare un algoritmo che, ricevendo in input la distanza T, indica all’utente quale mezzo utilizzare*
Informatica2: *Rispetto all’algoritmo precedente fornire in input anche le velocità dei mezzi e i tempi di parcheggio*
Matematica+Informatica: *Creare un algoritmo che date in input le velocità dei mezzi determini per quale distanza T conviene prendere uno o l’altro mezzo.*