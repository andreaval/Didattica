#include <iostream>
#include <cmath>
#include <chrono> 
using namespace std;
int main(){
    chrono::time_point<chrono::system_clock> start, end;
    start = chrono::system_clock::now(); 
    int long n,i=2;
    bool primo=true;
    cout << "Inserisci numero primo: ";
    cin >> n;
    while(i<=sqrt(n)){
        if(n%i==0) primo=false;
        i++;
    }
    end = chrono::system_clock::now(); 
    chrono::duration<double> diff = end - start; 
    if(primo) cout << "Primo\n";
    else cout << "Non primo\n";
    cout << "Tempo impiegato: " << diff.count() << "s\n"; 
}