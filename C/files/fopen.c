/**
 * MODALITÀ DI APERTURA DI UN FILE
 * @author Andrea Vallorani
 * @version 1.0 16/01/2018 14:50
 */
#include <stdio.h>

int main(){
    FILE *f;
    char filename[] = "input.txt";
    char riga[] = "a b c";
    char parola[100];
    char c;
    int i=0;
    printf("Apro il file %s in lettura (r)\n",filename);
    f = fopen(filename,"r");
    if(f){
        printf("File aperto correttamente.\nLeggo il contenuto:\n");
        while((c = getc(f)) !=EOF){
            putchar(c);
            i++;
        }
        printf("\nHo letto %d caratteri\n",i);
        fclose(f);
        
        printf("Apro il file %s in lettura/scrittura (r+)\n",filename);
        f = fopen(filename,"r+");
        printf("Scrivo: %s\n",riga);
        fprintf(f,"%s",riga);
        printf("Leggo il contenuto:\n");
        fseek(f,0,SEEK_SET);
        i=0;
        while((c = getc(f)) !=EOF){
            putchar(c);
            i++;
        }
        printf("\nHo letto %d caratteri\n",i);
        fclose(f);
        
        printf("Apro il file %s in lettura/scrittura (w+)\n",filename);
        f = fopen(filename,"w+");
        printf("Scrivo: %s\n",riga);
        fprintf(f,"%s",riga);
        printf("Leggo il contenuto:\n");
        fseek(f,0,SEEK_SET);
        i=0;
        while((c = getc(f)) !=EOF){
            putchar(c);
            i++;
        }
        printf("\nHo letto %d caratteri\n",i);
        fclose(f);
        
        printf("Apro il file %s in lettura/scrittura (a+)\n",filename);
        f = fopen(filename,"a+");
        printf("Scrivo: %s\n",riga);
        fprintf(f," %s",riga);
        printf("Leggo il contenuto:\n");
        fseek(f,0,SEEK_SET);
        i=0;
        while((c = getc(f)) !=EOF){
            putchar(c);
            i++;
        }
        printf("\nHo letto %d caratteri\n",i);
        fclose(f);
    }
    else{
        printf("Errore apertura. Forse il file non esiste.\n");
    }
}