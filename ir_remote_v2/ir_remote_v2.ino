#include <IRremote.h>

int RECV_PIN = 8;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
  Serial.begin(9600);
  Serial.println("Enabling IRin");
  irrecv.enableIRIn(); 
  Serial.println("Enabled IRin");
}

void loop() {
  
  if (results.value == E0E0609F){
      Serial.println("liga"); 
      digitalWrite(rele, HIGH);
    }
  if (results.value == E0E010EF){
      Serial.println("desliga"); 
      digitalWrite(rele, LOW);
    }
   
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    irrecv.resume(); 
  }
  delay(100);
}
