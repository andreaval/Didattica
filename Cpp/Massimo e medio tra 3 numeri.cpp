/**
 * Dati 3 numeri determinare il più grande e il secondo più grande
 * @author Andrea Vallorani
 */
#include <iostream>
using namespace std;
int main(){
    float n1,n2,n3,max,max2;
    cout << "Inserisci i 3 numeri: ";
    cin >> n1 >> n2 >> n3;
    if(n2>n1){ 
		max = n2;
        max2 = n1;
	} 
	else{
        max = n1;
		max2 = n2;
	}
	if(n3>max){
        max2 = max;
		max = n3;
	}
    else{
        if(n3>max2) max2=n3;
    }
	cout << "Il numero maggiore è " << max << "\n";
	cout << "Il secondo maggiore è " << max2 << "\n";
}
