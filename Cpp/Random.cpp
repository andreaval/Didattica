#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int random(int da,int a){
	int n;
	n = rand()%(a+1-da)+da;
	return n;
}

int main(){
	//inizializza il motore di generazione in maniera casuale
	srand(time(NULL)); 
	int n;
	cout << "Costante RAND_MAX: " << RAND_MAX << endl;
	//genero un numero da 0-99
	n = rand()%100; 
	cout << "Numero tra 0 e 99: " << n << endl;
	for(int i=0;i<100;i++){
		cout << "Numero tra 10 e 20: " << random(10,20) << endl;  
	}
}
