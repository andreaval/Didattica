/** 
 * Stampa inversa degli elementi di un array
 * @author Andrea Vallorani
 **/
#include <iostream>
using namespace std;

int main(){
	int n,i,j;
	cout << "Quanti numeri vuoi inserire? ";
	cin >> n;
	int a[n];
	//inizializzazione
	for(i=0;i<n;i++){
		cout << "Inserisci numero " << i+1 << " = ";
		cin >> a[i];
	}
	//stampa inversa
	for(j=1;j<=2;j++){
		cout << endl << "Stampa " << j << endl;
		for(i=n-1;i>=0;i--){
			cout << a[i] << " ";
		}
	}
}
