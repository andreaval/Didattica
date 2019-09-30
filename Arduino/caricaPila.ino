/**
 * Test batterie AA
 * @author Andrea Vallorani
 */
#define newLed 2
#define okLed 4
#define oldLed 6

int analogValue = 0;
float voltage = 0;
int ledDelay = 2000;
int status;

void setup(){
    pinMode(newLed,OUTPUT);
    pinMode(okLed,OUTPUT);
    pinMode(oldLed,OUTPUT);
    Serial.begin(9600);
    Serial.println("Avvio tester");
}

void loop(){
    analogValue = analogRead(0);
    voltage = 0.0048*analogValue;
    Serial.println(voltage,DEC);
    if(voltage>=1.6){
        status = newLed;
    }
    else if(voltage>=1.4 && voltage<1.6){
        status = okLed;
    }
    else{
        status = oldLed;
    }
    digitalWrite(status,HIGH);
    delay(ledDelay);
    digitalWrite(status,LOW);
}