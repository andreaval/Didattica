/**
 * INPUT STRINGA
 * Vari metodi per prendere in input una stringa e un array di stringhe
 * @author Andrea Vallorani
 * @version 1.0 22/05/17 14.49
 */
#include <stdio.h>

void input_stringa(char parola[]){
    printf("Inserisci parola: ");
    scanf("%s",parola);
}

void input_stringhe(int n,char parole[][100]){
    int i;
    for(i=0;i<n;i++){
        printf("Inserisci parola: ");
        scanf("%s",parole[i]);
    }
}
void stampa_stringa(char parola[]){
    printf("Hai inserito la parola: %s\n",parola);
}

void stampa_stringhe(int n,char parole[][100]){
    int i;
    printf("Hai inserito la parole: ");
    for(i=0;i<n;i++){
        printf("%s,",parole[i]);
    }
    printf("\n");
}
 
int main(){
    char parola[100];
    char parole[5][100];
    int i;
    //Input di una stringa: metodo 1
    printf("Inserisci parola: ");
    scanf("%s",parola); //scanf("%[^\n]s",parola); per leggere anche spazi bianchi
    stampa_stringa(parola);
    //Input di una stringa: metodo 2
    input_stringa(parola);
    stampa_stringa(parola);
    //Input di un array di stringhe: metodo 1
    for(i=0;i<5;i++){
        input_stringa(parole[i]);
    }
    stampa_stringhe(5,parole);
    //Input di un array di stringhe: metodo 2
    input_stringhe(5,parole);
    stampa_stringhe(5,parole);
    printf("\n");
    return 1;
}