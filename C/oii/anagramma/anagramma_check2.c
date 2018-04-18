/**
 * Verifica se una parola è l'anagramma dell'altra.
 * Soluzione con complessità: O(N^2)
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *in, *out;
    char s1[101];
    char s2[101];
    int i,y,trovato=0,len;
    in = fopen("input.txt","r"); 
    out = fopen("output.txt","w"); 
    if(in==NULL || out==NULL){
        fprintf(stderr,"Errore apertura files.\n");
        exit(1);
    }
    //in = stdin;
    //out = stdout;
    if(fscanf(in,"%s %s",s1,s2)!=2){
        fprintf(stderr,"Errore lettura parole.\n");
        exit(2);
    }
    //controllo stringhe
    len = strlen(s1);
    if(len==strlen(s2)){
        i = 0;
        trovato = 1;
        while(i<len && trovato){
            trovato = y = 0;
            while(y<len && !trovato){
                if(s1[i]==s2[y]){
                    trovato = 1;
                    s2[y] = 0; 
                }
                y++;
            }
            i++;
        }
    }
    if(trovato) fprintf(out,"SI");
    else fprintf(out,"NO"); 
}