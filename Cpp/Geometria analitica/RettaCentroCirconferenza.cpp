/**
 * Date in input una circonferenza di equazione x^2+y^2+ax+by+c=0 e una retta di equazione ax+by+c=0, 
 * determinare se la retta passa per il centro della circonferenza. 
 * Scrivere un programma C++ che, presi in input i coefficienti delle due equazioni, risolva
 * tale problema e dia in output “SI” se la retta passa per il centro e “NO” altrimenti.
 * @date 2019-03-14
 * @author Andrea Vallorani
 */
#include <iostream>
using namespace std;
int main(){
    float cA,cB,cC,rA,rB,rC,x,y;
    cout << "Inserisci coefficienti della circonferenza";
    cin >> cA >> cB >> cC;
    cout << "Inserisci coefficienti della retta";
    cin >> rA >> rB >> rC;
    x = -cA/2;
    y = -cB/2;
    if(rA*x+rB*y+rC==0) cout << "SI\n";
    else cout << "NO\n";
}