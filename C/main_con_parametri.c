/**
 * PASSAGGIO DI PARAMETRI AL MAIN
 * L'algoritmo stampa il numero e il valore dei parametri 
 * forniti in fase di esecuzione del programma
 * @author Andrea Vallorani
 * @version 1.0 07/04/17 23.11
 */
#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;
    printf("Sono stati forniti %d parametri\n", argc - 1);
    for(i=1;i<argc;i++){
        printf("Parametro %d = %s\n",i,argv[i]);
    }
    return 1;
}