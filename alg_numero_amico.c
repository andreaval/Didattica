/**
 * NUMERO AMICO
 * Verifica se un numero dato ha un numero amico
 * @author Andrea Vallorani
 * @version 1.0 19/12/16 22.42
 */
#include <stdio.h>

int main(){
    unsigned int i,n,m,verifica;
    m = verifica = 0;
    printf("Inserisci numero da verificare: ");
    scanf("%u",&n);
    printf("\nDivisori di %u: ",n);
    for(i=1;i<=n/2;i++){
        if(n%i == 0){
            m += i;
            printf("%u ",i);
        }
    }
    printf(" = %u\n",m);
    printf("Divisori di %u: ",m);
    for(i=1;i<=m/2;i++){
        if(m%i == 0){
            verifica += i;
            printf("%u ",i);
        }
    }
    printf(" = %u\n\n",verifica);
    if(n == verifica){
        printf("Trovato numero amico: %u",m);
    }
    else{
        printf("%u non ha un numero amico",n);
    }
    printf("\n\n");
    return 1;
}