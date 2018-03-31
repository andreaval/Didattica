# Progettazione concettuale di un DB

## Ristrutturazione modello concettuale
La ristrutturazione di un diagramma E-R si effettua attraverso i seguenti passi:
1. Analisi delle ridondanze
2. Traduzione delle generalizzazioni
3. Partizionamento o accoprmaneto di entità o associazioni
4. Scelta delle chiavi primarie

### Analisi delle ridondanze

Ridondanza = si definisce ridondanza in uno schema E-R la presenza di informazioni che possono essere ottenuti in più di un modo

Possiamo trovare 4 tipi di ridondanze:
1. Attributi derivabili da altri attributi della stessa entitá o di altre entitá
2. Attributi derivabili dal conteggio delle occorrenze
3. Relazioni derivabili dalla composizione di altre relazioni

La presenza di ridondanze in un DB comporterá sicuramente uno spreco di memoria e un numero aggiuntivo di operazioni per mantenere il DB in uno stato consistente. Dall’altra parte, la presenza di ridondanze può ridurre il numero di accessi e/o di calcoli necessari per recuperare particolari informazioni. Non è detto quindi che tutte le ridondanze debbano essere eliminate da un diagramma E-R, occorre analizzarle caso per caso ricorrendo alla "Tavola dei volumi" e alla "Tavola degli accessi".
