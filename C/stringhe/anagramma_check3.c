/**
 * Verifica se una parola è l'anagramma dell'altra.
 * Soluzione con complessità: O(N)
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    FILE *in, *out;
    char s1[101];
    char s2[101];
    int x[26];
    int i,len,ok;
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
    //inizializzo array x
    for(i=0;i<26;i++) x[i] = 0;
    //controllo stringhe
    ok = 0;
    len = strlen(s1);
    if(len==strlen(s2)){
        for(i=0;i<len;i++){
            x[tolower(s1[i])-(int)'a']++;
            x[tolower(s2[i])-(int)'a']--;
        }
        i = 0;
        ok = 1;
        while(i<26 && ok){
            if(x[i]!=0) ok = 0;
            i++;
        }
    }
    if(ok) fprintf(out,"SI");
    else fprintf(out,"NO"); 
}