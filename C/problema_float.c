/**
 * Accortezza da utilizzare nell'uso del tipo float
 * Se una variabile float contiene un valore >=32 le ultime cifre decimali vengono approssimate con un errore
 * @author Andrea Vallorani
 * @version 1.0 23/01/2017 **/
#include <stdio.h>

int main(){
    float x;
    x = 34.90;
    printf("x = %f\n",x);
    if(x==34.90) printf("X è 34.90\n");
    else printf("x NON è 34.90\n");
    if(x==(float)34.90) printf("X è 34.90\n");
    else printf("x NON è 34.90\n");
    x = 31.90;
    printf("x = %f\n",x);
    x = 32.10;
    printf("x = %f\n",x);
}