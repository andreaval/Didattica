#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int n,a,b,s,m;
    m = -1;
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    fin >> n;
    while(fin >> a >> b){
        s = a+b;
        if(s%2==0 && s>m){
            m = s;
        }
    }
    fout << m;
    fout.close();
    fin.close();
}