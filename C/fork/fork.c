/**
 * UTILIZZO FUNZIONE FORK
 * @author Andrea Vallorani
 * @version 1.0 14/07/17 00.46
 */
#include <stdio.h>
#include <unistd.h>
//#include <sys/wait.h>

int main(){
    int i=0,status;
    i = fork();
    if(i>0) fork();
    printf("Io sono il processo con PID %d \n",getpid());
    printf("Mio padre è il processo con PID %d \n\n",getppid());
    /*if(i>0){
        i = wait(&status);
        i = wait(&status);
    }*/
}