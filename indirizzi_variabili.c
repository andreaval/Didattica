/**
 * TEST INDIRIZZI DELLE VARIABILI
 * Visualizza l'indirizzo in memoria assegnato alle variabili
 * @author Andrea Vallorani
 * @version 1.0 19/11/2016
 */
#include <stdio.h>

int main(){
    int a = 1;
    char b = 'a';
    float c = 1.3;
    long d = 10;
    printf("nome | indirizzo  | dim.    | valore\n");
    printf("---------------------------------------\n");
    printf("  a  | %d | %lu bytes | %d\n",&a,sizeof(a),a);
    printf("  b  | %d | %lu bytes | %c\n",&b,sizeof(b),b);
    printf("  c  | %d | %lu bytes | %f\n",&c,sizeof(c),c);
    printf("  d  | %d | %lu bytes | %lu\n",&d,sizeof(d),d);
    return 1;
}