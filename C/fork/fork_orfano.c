/* PROCESSO ORFANO */
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main(){
    int p=0;
    p = fork();
    if(p==0){
        printf("Mio padre è: %d\n",getppid());
        sleep(2);
        for(int i=0;i<100;i++){
            printf("%d,",i);
        }
        printf("\nMio padre è: %d\n",getppid());
    }
    else{
        printf("Io sono il processo %d\n",getpid());
        sleep(1);
    }
}