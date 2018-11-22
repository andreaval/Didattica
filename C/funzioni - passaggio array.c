/**
 * Passaggio di parametri di tipo array
 */
#include <stdio.h>

int somma(int *x,int n){
    int s=0;
    for(int i=0;i<n;i++) s+=x[i];
    return s;
}

void scambio(int *x,int n){
    int t;
    for(int i=0;i<n/2;i++){
        t = x[i];
        x[i] = x[n-1-i];
        x[n-1-i] = t;   
    } 
}

int *raddoppio(int *x,int n){
    for(int i=0;i<n;i++) x[i]*=2;
    return x;
}

int succ[3];
int *successivi3(int n){
    for(int i=0;i<3;i++) succ[i]=n+1+i;
    return succ;
}
 
int main(){
    int a[] = {1,2,3};
    int *b,*c;
    printf("Somma array: %d\n",somma(a,3));
    printf("Scambio valori: ");
    scambio(a,3);
    for(int i=0;i<3;i++) printf("%d ",a[i]);
    printf("\n");
    printf("Raddoppio valori: ");
    b = raddoppio(a,3);
    for(int i=0;i<3;i++) printf("%d ",b[i]);
    printf("\n");
    printf("Successivi 3 del numero 10: ");
    c = successivi3(10);
    for(int i=0;i<3;i++) printf("%d ",c[i]);
    printf("\n");
}