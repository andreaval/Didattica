#include <stdio.h>
#include <string.h>

typedef char parola[10];

void f1(char s[]){
    s[0]='C';
    printf("f1: %s %lu\n",s,strlen(s));
}
void f2(char s[100]){
    s[0]='C';
    printf("f2: %s %lu\n",s,strlen(s));
}
void f3(char *s){
    s[0]='C';
    printf("f3: %s %lu\n",s,strlen(s));
}
void f4(parola s){
    s[0]='C';
    printf("f4: %s %lu\n",s,strlen(s));
}
char *f5(char *s){
    s[0]='-';
    return s;
}

int main(){
    char a[10];
    //a = {'c','i','a','o','\0'}; //ERRATO
    //a = "ciao\0"; //ERRATO
    a[0]='c';a[1]='i';a[2]='a';a[3]='o';a[4]='\0'; //OK
    char b[10] = "ciao"; //OK
    char c[] = "ciao"; //OK
    char d[10] = {'c','i','a','o','\0'}; //OK
    char e[] = {'c','i','a','o','\0'}; //OK
    char *f = "ciao"; //OK ma la stringa è una costante
    //f[0]='a'; //ERRATO perchè la stringa in f è costante
    printf("a: %s %lu\n",a,strlen(a));
    printf("b: %s %lu\n",b,strlen(b));
    printf("c: %s %lu\n",c,strlen(c));
    printf("d: %s %lu\n",d,strlen(d));
    printf("e: %s %lu\n",e,strlen(e));
    printf("f: %s %lu\n",f,strlen(f));
    f1(a);
    f2(a);
    f3(a);
    parola p1 = "ciao";
    printf("g: %s %lu\n",p1,strlen(p1));
    f=f5(c);
    printf("h: %s %lu\n",f,strlen(f));
}