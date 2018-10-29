#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int i,n,a,s,smax,pmax,dmax;
    smax = -1;
    pmax = -1;
    dmax = -1;
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    fin >> n;
    for(i=0;i<n;i++){
        fin >> a;
        if(a%2==0){
            if(pmax>=0){
                s = pmax+a;
                if(s>smax){
                    smax = s;
                }
            } 
            if(a>pmax) pmax = a;
        } 
        else{
            if(dmax>=0){
                s = dmax+a;
                if(s>smax){
                    smax = s;
                }
            } 
            if(a>dmax) dmax = a;
        } 
    }
    fout << smax;
    fout.close();
    fin.close();
}