/**
 * In un supermercato vengono applicati degli sconti in base all’importo totale di acquisto. 
 * Se l’importo totale è compresso tra 50 e 99 euro viene applicato il 5%, se è compreso tra 
 * 100 e 199 il 10%, se è compreso tra 200 e 299 il 20%, se è superiore a 300 il 30%. 
 * Creare un software in grado di calcolare l'effettivo prezzo che il cliente dovrà pagare.
 * Stampare sconto applicato e prezzo scontato. 
 * @author Andrea Vallorani
 */
#include <iostream>
using namespace std;
int main(){
    float tot,totScontato,sconto;
    cout << "Inserisci il totale della spesa (in €): ";
    cin >> tot;
    if(tot<50){
        sconto = 0;
    }
    else{
        if(tot<=99){ 
            sconto = 5;
        } 
        else{
            if(tot<=199){
                sconto = 10;
            }
            else{
                if(tot<=299){
                    sconto = 20;
                }
                else{
                    sconto = 30;
                }
            }
        }
    }
    totScontato = tot - (tot/100*sconto);
	cout << "Sconto applicato: " << sconto << "%\n";
	cout << "Prezzo scontato: " << totScontato << " €\n";
}
