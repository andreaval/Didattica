/**
* Partendo dal seguente codice di esempio, costruire un programma per un ristorante
* che permetta di registrare le prenotazioni ricevute. 
* Inoltre il programma deve permettere di stampare le prenotazioni fino a quel momento registrate.
* Il programma non deve permettere di inserire più di 20 prenotazioni e il totale delle persone
* nel ristorante non deve superare 50.
* Svolgere l'esercizio utilizzando un sottoprogramma solo per la stampa del menu (1- inserisci prenotazione, 2-stampa prenotazioni)
*/
#include <stdio.h>

int main(){
    //numero massimo di persone presenti nel ristorante
    int max_persone = 50;
    //numero massimo di prenotazioni
    int max_prenotazioni = 20;
    
    //definisco la struct 'prenotazione'
    struct prenotazione{
        char nome[30];
        int persone;
    };
    //dichiaro un array contenente 20 struct 'prenotazione'
    //ATTENZIONE: l'array si chiama 'tavoli'
    struct prenotazione tavoli[max_prenotazioni];
    
    //ad esempio leggo in input i dati della prima struct
    scanf("%s",tavoli[0].nome); //qui NON devo mettere la & perchè è un array
    scanf("%d",&tavoli[0].persone); //qui devo mettere la & perchè è un numero
    
    //ad esempio stampo i dati della prima struct
    printf("Il tavolo prenotato da %s è composto da %d persone",tavoli[0].nome,tavoli[0].persone);
}