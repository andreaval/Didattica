/**
 * Calcolo parallelo di area e perimetro di un rettangolo tramite Thread
 * @author Andrea Vallorani
 */
#include <pthread.h>
#include <stdio.h>

int l1,l2;

void *area(){
    int a;
    a = l1*l2;
    printf("Area: %d\n",a);
    return NULL;
}

void *perimetro(){
    int p;
    p = l1*2+l2*2;
    printf("Perimetro: %d\n",p);
    return NULL;
}

int main(){
    pthread_t tID1;
    pthread_t tID2;
    printf("Inserisci lato minore: ");
    scanf("%d",&l1);
    printf("Inserisci lato maggiore: ");
    scanf("%d",&l2);
    pthread_create(&tID1, NULL, &area, NULL);
    pthread_create(&tID2, NULL, &perimetro, NULL);
    pthread_join(tID1, NULL);
    pthread_join(tID2, NULL);
    printf("Calcolo concluso!\n");
    return 0;
} 