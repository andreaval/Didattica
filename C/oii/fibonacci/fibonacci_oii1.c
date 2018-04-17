#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *in, *out;
    in = fopen("lwf_input_1.txt","r");
    out = fopen("output.txt","w");
    
    int n,f1,f2,f3,i,j,max,T=1,maxT;
    int num[30];
    fscanf(in,"%d",&maxT);
    //printf("%d\n",maxT);
    
    for(T=1;T<=maxT;T++){
        fscanf(in,"%d",&n);
        //printf("%d",n);
        f1=f2=f3=1;
        i=-1;
        while(f2<=n){
            f1 = f2;
            f2 = f3;
            f3 = f1+f2;
            i++;
        }
        for(j=0;j<i;j++){
            num[j]=0;
        }
        max=i;
        while(n>0){
            if(f1<=n){
                n = n-f1;
                num[i] = 1;
            }
            f3 = f2;
            f2 = f1;
            f1 = f3-f2;
            i--;
        }
        fprintf(out,"Case #%d: ",T);
        for(i=0;i<=max;i++){
            fprintf(out,"%d",num[i]);
        }
        fprintf(out,"\n");
    }
    fclose(in);
    fclose(out);
}