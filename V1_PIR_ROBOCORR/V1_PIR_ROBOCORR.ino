const int pir_signal_pin = 7;
const int relay = 8;
const int desligado = 13;

boolean pir_status;

void setup() {
  pinMode(pir_signal_pin,INPUT);
  pinMode(relay,OUTPUT);
  pinMode(desligado,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  pir_status = digitalRead(pir_signal_pin);
  Serial.println(pir_status);
  if(pir_status == HIGH){
    digitalWrite(relay,HIGH);
    digitalWrite(desligado,LOW);
    delay(1000);
  }
  else{
    digitalWrite(relay,LOW);
    digitalWrite(desligado,HIGH);
  }
}
