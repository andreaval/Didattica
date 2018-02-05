/*
 * INDOVINA NUMERO
 * Il computer genera un numero casuale. L'utente dovrá cercare di indovinarlo.
 * @author Andrea Vallorani
 * @version 1.0.1 07/01/2017
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    const int MAX_TENTATIVI = 5;
    int r,n,mod;
    int tentativi=0,indovinato=0;

    srand(time(NULL));
    r=rand()%50;
    printf("\n* Il computer ha pensato un numero da 0 a 50.\n* Prova ad indovinarlo. Hai a disposizione %d tentativi.\n\n",MAX_TENTATIVI);
    do{
        printf("Modalità di gioco (0=easy,1=hard): ");
        scanf("%d",&mod);
    }
    while(mod<0 || mod>1);
    printf("\n");
    do{
        tentativi++;
        printf("Tentativo %d: ",tentativi);
        scanf("%d",&n);
        if(r==n){
            indovinato=1;
            printf("Hai indovinato !!");
        }
        else{
            if(mod == 0){
                if(r>n) printf("Il numero è maggiore di %d\n",n);
                else printf("Il numero è minore di %d\n",n); 
            }
            else printf(":(\n");
        }
    }
    while(!indovinato && tentativi<MAX_TENTATIVI);
    
    if(!indovinato){
    	printf("\nHai perso! Il numero pensato era: %d",r);
    }
    printf("\n\n");
}