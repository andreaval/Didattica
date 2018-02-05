/**
 * Trova i caratteri in comune tra due stringhe
 * @author Andrea Vallorani
 */ 
#include <stdio.h>

int main(){
    char P1[100],P2[100],UNICI[100];
    int i,y,x,nt,nu,trovato,presente;
    printf("Inserisci prima parola (max 100 caratteri): ");
    scanf("%s",P1);
    printf("Inserisci seconda parola (max 100 caratteri): ");
    scanf("%s",P2);
    i = 0;
    nu = 0;
    nt = 0;
    while(P1[i]!='\0' && P2[i]!='\0'){
        y = 0;
        trovato = 0;
        while(P2[y]!='\0' && trovato==0){
            if(P1[i]==P2[y]){ 
                nt++;
                trovato = 1;
                x = 0;
                presente = 0;
                while(x<nu && presente==0){
                    if(UNICI[x]==P1[i]) presente = 1;
                    x++;
                }
                if(presente==0){
                    UNICI[nu] = P1[i];
                    nu++;
                }
                P2[y] = 1;
            }
            y++;     
        }
        i++;
    }
    printf("Tot caratteri in comune: %d\n",nt);
    printf("Tot caratteri in comune distinti: %d (",nu);
    for(i=0;i<nu;i++){
       printf("%c",UNICI[i]);
       if(i+1<nu) printf(",");
    }
    printf(")\n");
}   