#include <iostream>
#include <fstream>
using namespace std;

int main(){
    unsigned int n,d,i;
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    fin >> n >> d;
	int galliH[n],galliL[n];
	for(i=0;i<n;i++){
		fin >> galliH[i] >> galliL[i];
	}
	fout << n << " " << d;
    fout.close();
    fin.close();
}