/**
 * Calcoli sull'aritmetica dei puntatori
 * @author Andrea Vallorani
 */
#include <stdio.h>

int main(){
    int a = 2;
    int *x = &a;
    
    printf("Contenuto di a: %d \nIndirizzo di a: %p\n\n",a,&a);
    printf("Contenuto di x: %p \nIndirizzo di x: %p\n\n",x,&x);
    
}