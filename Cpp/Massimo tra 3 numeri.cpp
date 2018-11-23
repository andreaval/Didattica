#include <iostream>
using namespace std;
int main(){
	//le variabili per convenzione si scrivono in minuscolo
    float n1,n2,n3,max;
    cout << "Inserisci 1° numero";
    cin >> n1;
    cout << "Inserisci 2° numero";
    cin >> n2;
    cout << "Inserisci 3° numero";
    cin >> n3;
    if(n1>n2){ 
		max = n1;
	} 
	else{
		max = n2;
	}
	if(n3>max){
		max = n3;
	}
	cout << "Il numero maggiore è " << max;
}
