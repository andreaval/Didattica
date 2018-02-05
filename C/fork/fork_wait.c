/**
 * UTILIZZO FUNZIONI FORK e WAIT
 * @author Andrea Vallorani
 * @version 1.0 14/07/17 00.46
 */
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
    int i=0,j=0,status;
    i = fork();
    if(i>0){
        for(j=10;j<20;j++) printf("%d,",j);
        i = wait(&status);
        printf("Concluso processo figlio con PID %d \n",i);
    } 
    else{
        printf("Io sono il processo figlio con PID %d \n",getpid());
        for(j=0;j<10;j++) printf("%d,",j);
        printf("\nHo concluso il mio lavoro\n");
    }
}