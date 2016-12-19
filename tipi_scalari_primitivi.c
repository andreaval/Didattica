/**
 * C: TIPI SCALARI PRIMITIVI
 * Elenco dei tipi primitivi del linguaggio C con relativa dimensione
 * @author Andrea Vallorani
 * @version 1.0 17/11/2016
 */
#include <stdio.h>

int main(){
    printf("char:\t\t\t %lu bytes\n",sizeof(char));
    printf("int:\t\t\t %lu bytes\n",sizeof(int));
    printf("float:\t\t\t %lu bytes\n",sizeof(float));
    printf("double:\t\t\t %lu bytes\n\n",sizeof(double));
    
    printf("short int:\t\t %lu bytes\n",sizeof(short int));
    printf("unsigned int:\t\t %lu bytes\n",sizeof(unsigned int));
    printf("short unsigned int:\t %lu bytes\n\n",sizeof(short unsigned int));
    
    printf("long int:\t\t %lu bytes\n",sizeof(long int));
    printf("long unsigned int:\t %lu bytes\n",sizeof(long unsigned int));
    printf("long long int:\t\t %lu bytes\n",sizeof(long long int));
    printf("long double:\t\t %lu bytes\n",sizeof(long double));
    return 1;
}