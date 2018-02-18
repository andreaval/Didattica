/**
* UTILIZZO FUNZIONI FORK e WAIT
 */
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
    int i=0,status,j=0;
    i = fork();
    //printf("Creato processo %d\n",i);
    if(i>0){
        i = fork();
        //printf("Creato processo %d\n",i);
    } 
    //j = wait(&status);
    printf("Ha terminato %d\n",getpid());
    //j = wait(&status);
    //printf("Ha terminato %d\n",j);
}