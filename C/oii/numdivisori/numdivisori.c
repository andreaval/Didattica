#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *in, *out;
    in = fopen("input.txt","r");
    out = fopen("output.txt","w");
    
    long int n,temp;
    int tot;
    fscanf(in,"%ld",&n);
    temp = n;
    if(n%temp==0) tot++;
    temp = temp / 2;
    //if(temp>1000) temp=1000;
    while(temp>0){
        if(n%temp==0) tot++;
        temp--;
    }
    fprintf(out,"%d",tot);
    fclose(in);
    fclose(out);
}