/**
 * Inserimento di un elemento in un array ordinato di interi.
 * La ricerca della posizione in cui inserire l'elemento avviene tramite
 * ricerca sequenziale.
 *
 * @author Andrea Vallorani
 * @version 1.0 06/03/2017 17:47
 */
#include <stdio.h>
 
int main(){
    int n,pos,len,i,max=100;
    int numbers[max];
    char ok;
    len = 0;
    do{
        //lettura numero da inserire
        printf("Inserisci un numero: ");
        scanf("%d",&n);
        
        //ricerca posizione tramite ricerca sequenziale
        i = 0;
        while(i<len && n>numbers[i]){
            i++;
        }
        pos = i;
        
        //inserimento nella posizione 'pos'
        for(i=len;i>=pos;i--){
            numbers[i+1] = numbers[i];
        }
        numbers[pos] = n;
        len++;
        
        //richiesta inserimento nuovo numero
        printf("Inserire un altro numero? (s=SI,n=NO): ");
        scanf(" %c",&ok);
    }
    while(ok=='s' && len<max);
    
    //stampa array ordinato
    printf("\nArray:");
    for(i=0;i<len;i++){
        printf(" %d",numbers[i]);
    }
    printf("\n\n");
}