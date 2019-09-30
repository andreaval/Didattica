/**
 * Accensione led RGB
 * @author Andrea Vallorani
 */
int pinRosso = 11;
int pinVerde = 10;
int pinBlu = 9;

//funzione per creare un colore: valori permessi da 0 a 255
void colore (unsigned char rosso, unsigned char verde, unsigned char blu){
    analogWrite(pinRosso,rosso);
    analogWrite(pinVerde,verde);
    analogWrite(pinBlu,blu);
}

void setup(){
    pinMode(pinRosso,OUTPUT);
    pinMode(pinVerde,OUTPUT);
    pinMode(pinBlue,OUTPUT);
}

void loop(){
    colore(255,0,0); //luce rossa
    delay(2000);
    colore(0,255,0); //luce verde
    delay(2000);
    colore(0,0,255); //luce blu
    delay(2000);
    colore(237,109,0); //luce arancio
    delay(2000);
    colore(0,0,0); //luce spenta
    delay(2000);
}
