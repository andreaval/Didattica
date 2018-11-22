#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int i,n,a,s,smax,pmax1,pmax2,dmax1,dmax2;
    smax = pmax1 = pmax2 = dmax1 = dmax2 = -1;
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    fin >> n;
    for(i=0;i<n;i++){
        fin >> a;
        if(a%2==0){
            if(a>=pmax1){
                pmax2 = pmax1;
                pmax1 = a; 
            }
            else{
                if(a>pmax2) pmax2 = a;
            }
        } 
        else{
            if(a>=dmax1){
                dmax2 = dmax1;
                dmax1 = a; 
            }
            else{
                if(a>dmax2) dmax2 = a;
            }
        }
    }
    if(pmax1>=0 && pmax2>=0){
        smax = pmax1+pmax2;
    } 
    if(dmax1>=0 && dmax2>=0){
        s = dmax1+dmax2;
        if(s>smax) smax = dmax1+dmax2;
    } 
    fout << smax;
    fout.close();
    fin.close();
}