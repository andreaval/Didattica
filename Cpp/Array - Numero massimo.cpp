#include <iostream>
#include <fstream>
using namespace std;

int main(){
	unsigned short int n,i;
	short int d,max;
	ifstream fin("input.txt");
    ofstream fout("output.txt");
    fin >> n;
    fin >> max;
    for(i=1;i<n;i++){
    	fin >> d;
    	if(d>max) max=d;
    }
    fout << max;
    fout.close();
    fin.close();
}