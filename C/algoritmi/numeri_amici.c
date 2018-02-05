/**
 * RICERCA NUMERI AMICI
 * Ricerca coppie di numeri amici
 * @author Andrea Vallorani
 * @version 1.0 19/12/16 22.56
 */
#include <stdio.h>

int main(){
    unsigned int i,verifica,x,trovate;
    unsigned long int n,m;
    trovate = 0;
    n = 1;
    do{
        printf("Numero di coppie da cercare (1-100): ");
        scanf("%u",&x);
    }while(x<1 || x>100);
    while(trovate<x){
        m = verifica = 1;
        for(i=2;i<=n/2;i++){
            if(n%i == 0){
                m += i;
            }
        }
        for(i=2;i<=m/2;i++){
            if(m%i == 0){
                verifica += i;
            }
        }
        if(n==verifica && n!=m && n<m){
            trovate++;
            printf("%u) %lu,%lu\n",trovate,n,m);
        }
        n++;
    }
    return 1;
}