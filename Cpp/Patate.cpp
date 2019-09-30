#include <iostream>
using namespace std;
int main(){
   int KG,nC,nB=0,rimanenti;
   cin >> KG;
   nC = KG/20;
   rimanenti = KG%20;
   if(rimanenti>=10) nC++;
   else{
      nB = rimanenti/3;
      if(rimanenti%3>0) nB++;
   }
   cout << "Cassette: " << nC << "\n";
   cout << "Buste: " << nB << "\n";
}