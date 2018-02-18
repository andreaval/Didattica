/**
 * STAMPA TAVOLA PITAGORICA
 * @author Andrea Vallorani
 * @version 1.0 19/12/16 22.29
 */
#include <stdio.h>

#define FROM 1
#define TO   10

int main(){
    int i,t,val;
    for(i=FROM;i<=TO;i++){
        val = 0;
        for(t=1;t<=10;t++){
            val += i;
            printf("%3d ",val);
        }
        printf("\n");
    }
    return 1;
}