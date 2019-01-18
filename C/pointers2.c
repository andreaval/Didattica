#include <stdio.h> 

int main() {
    int value, *pv, **ppv;

    value = 971;
    pv = (int*)&ppv;
    printf("Contenuto pv: %p - Indirizzo pv: %p\n",pv,&pv);
    ppv = &pv;
    printf("Contenuto ppv: %p - Indirizzo ppv: %p\n",ppv,&ppv);

    printf("%d %d %d\n", value, *pv, **ppv);
    return 0;
}