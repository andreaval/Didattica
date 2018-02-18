/**
 * Inserimento di un elemento in un array ordinato di interi.
 * La ricerca della posizione in cui inserire l'elemento avviene tramite
 * ricerca binaria.
 *
 * @author Andrea Vallorani
 * @version 1.0 06/03/2017 17:47
 */
#include <stdio.h>
 
int main(){
    int n,pos,len,i,min,max,centro,trovato,tot=100;
    int numbers[tot];
    char ok;
    len = 0;
    do{
        //lettura numero da inserire
        printf("Inserisci un numero: ");
        scanf("%d",&n);
        
        //ricerca posizione tramite ricerca binaria
        min = 0;
        trovato = 0;
        max = len-1;
        while(min<=max && !trovato){
            centro = (min+max)/2;
            if(numbers[centro]==n){
                trovato = 1;
            }
            else{
                if(n<numbers[centro]){
                    max = centro-1;
                }
                else{
                    min = centro+1;
                }
            }
        }
        if(trovato){
            pos = centro;
        } 
        else{
            pos = min;
        }
        printf("pos: %d\n",pos);
        
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
    while(ok=='s' && len<tot);
    
    //stampa array ordinato
    printf("\nArray:");
    for(i=0;i<len;i++){
        printf(" %d",numbers[i]);
    }
    printf("\n\n");
}