/**
* Gestione prenotazioni ristorante
*/
#include <stdio.h>

int menu(){
    int n;
    do{
        printf("\n1 - Inserisci prenotazione\n");
        printf("2 - Stampa prenotazioni\n");
        printf("0 - ESCI\n");
        scanf("%d",&n);
    }while(n<0 || n>2);
    return n;
}

int main(){
    //numero massimo di persone presenti nel ristorante
    int max_persone = 50;
    //numero massimo di prenotazioni
    int max_prenotazioni = 20;
    //posti liberi
    int posti_liberi = max_persone;
    //prenotazioni ricevute
    int tot_prenotazioni = 0;
    //altre variabili
    int p,i,scelta;
    //definisco la struct 'prenotazione'
    struct prenotazione{
        char nome[30];
        int persone;
    };
    //dichiaro un array contenente 20 struct 'prenotazione'
    struct prenotazione tavoli[max_prenotazioni];
    
    printf("- PROGRAMMA RISTORANTE -\n");
    do{
        scelta = menu();
        switch(scelta){
            //inserimento prenotazione
            case 1: 
                if(tot_prenotazioni>=max_prenotazioni){
                    printf("Ci dispiace non possiamo accettare altre prenotazioni, siamo al completo\n");
                }
                else{
                    printf("Per quante persone volete prenotare? ");
                    scanf("%d",&p);
                    if(posti_liberi>p){
                        posti_liberi -= p;
                        tavoli[tot_prenotazioni].persone = p;
                        printf("A quale nome segno la prenotazione? ");
                        scanf("%s",tavoli[tot_prenotazioni].nome);
                        tot_prenotazioni++;
                        printf("Prenotazione registrata!\n\n");
                    }
                    else{
                        printf("Putroppo non possiamo accettare la sua prenotazione, abbiamo solo %d posti liberi\n\n",posti_liberi);
                    }
                }
            break;
            //stampa prenotazioni
            case 2:
                printf("Prenotazioni: %d\n",tot_prenotazioni);
                for(i=0;i<tot_prenotazioni;i++){
                    printf("%d) %d persone a nome %s\n",i+1,tavoli[i].persone,tavoli[i].nome);
                }
                printf("Posti liberi: %d\n",posti_liberi);
            break;
        }
    }while(scelta!=0);
}