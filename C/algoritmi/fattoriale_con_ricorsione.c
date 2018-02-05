/*
 * Calcolo del fattoriale di un numero utilizzando una funzione ricorsiva
 * DA FARE:
 * Scrivere la pseudocodifica e la tabella di traccia ipotizzando numero=4
 * Ricopiare pseudo e codice C sul quaderno di bella (E28 - fattoriale con ricorsione)
 */
#include <stdio.h>

long int fattoriale(int n){
    if(n>1){
        return n*fattoriale(n-1);
    }
    else return 1;
}
 
int main(){
    int numero;
    long int risultato;
    do{
        printf("Inserisci un numero naturale: ");
        scanf("%d",&numero);
    }
    while(numero<0);
    risultato = fattoriale(numero);
    printf("%d! = %li\n",numero,risultato);
}   