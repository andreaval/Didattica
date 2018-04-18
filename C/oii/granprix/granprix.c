#include <stdio.h>

int main(){
    FILE *in, *out;
    in = fopen("input.txt","r");
    out = fopen("output.txt","w");
    
    int i,N,M,gara[31],x,y,temp;
    fscanf(in,"%d %d",&N,&M);
    printf("%d %d\n",N,M);
    for(i=1;i<=N;i++){
        fscanf(in,"%d",&x);
        gara[x]=i;
    }
    for(i=1;i<=M;i++){
        fscanf(in,"%d %d",&x,&y);
        temp = gara[y];
        gara[y] = gara[x];
        gara[x] = temp;
    }
    i=0;
    while(gara[i]!=1) i++;
    fprintf(out,"%d",i);
    fclose(in);
    fclose(out);
}