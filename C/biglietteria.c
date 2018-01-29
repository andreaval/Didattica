/**
 * Biglietteria parco divertimenti
 * @author Andrea Vallorani
 * @version 1.0.0 21/01/2017
 */
#include <stdio.h>

int main(){
    int Risposta; //valore di Risposta
    int E; //età
    int H; //altezza
    float P; //prezzo biglietto
    printf("La persona e' disabile? (1=si,0=no): ");
    scanf("%d",&Risposta);    
    if(Risposta==1){
        P=0.00;                                                       
    }
    else{
        printf("E' un accompagnatore? (1=si,0=no): ");                     
        scanf("%d",&Risposta);       
        if(Risposta==1){
            P=25.50;
        }
        else{ 
            printf("Inserisca l'eta': ");                    
            scanf("%d",&E);
            if(E>=60){
                P=25.00;
            }
            else{ 
                printf("Inserisca l'altezza: ");            
                scanf("%d",&H);                    
                if(H<=100){
                    P=0.00;
                }
                else{
                    if(H>=100 && H<=140){
                        P=28.00;
                    }
                    else{
                        P=34.90;
                    }
                }
            }   
        }
    }
    printf("Vuole il supplemento mirabeach? (1=si,0=no): ");
    scanf("%d",&Risposta);
    if(Risposta==1){   //se la persona vuole il supplemento
        if(P==(float)34.90) {
            P+=9.50;
        }
        else if(P>0.00){
            P+=7.50;
        }
    }
    printf("Il prezzo del biglietto e': %.2f euro\n",P); //stampa il prezzo finale
}