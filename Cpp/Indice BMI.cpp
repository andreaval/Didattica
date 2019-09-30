/**
 * L'indice di massa corporea (abbreviato BMI, dall'inglese body mass index) è un dato biometrico 
 * utilizzato dai professionisti per stimare il peso forma di una persona. E' calcolato come rapporto 
 * tra il peso in chilogrammi (kg) e il  quadrato dell'altezza in metri (m) di un individuo.
 * Creare un software che, dato il peso e l'altezza di una persona calcoli il suo indice BMI e indichi, 
 * secondo la seguente tabella, lo stato di forma:
 * < 18,5 sottopeso
 * tra 18,5 e 24,9 regolare
 * tra 25 e 29,9 sovrappeso
 * oltre 30 obeso
 * @author Andrea Vallorani
 */
#include <iostream>
using namespace std;
int main(){
    float peso,altezza,bmi;
    string stato;
    cout << "Inserisci peso (in Kg): ";
    cin >> peso;
    cout << "Inserisci altezza (in metri): ";
    cin >> altezza;
    bmi = peso/(altezza*altezza);
    cout << "Il tuo BMI è: " << bmi << "\n";
    if(bmi<18.5){
        stato = "sottopeso"; 
    }
    else{
        if(bmi<=24.9){ 
            stato = "regolare"; 
        } 
        else{
            if(bmi<=29.9){
                stato = "sovrappeso"; 
            }
            else{
                stato = "obeso"; 
            }
        }
    }
    cout << "Stato di forma: " << stato << "\n";
}