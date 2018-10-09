const int Receptor = A2;
int ValorSensor = 0;  

void setup() {
  Serial.begin(9600);
}

void loop() {
  
  Serial.print("Valor lido: ");
  
  ValorSensor = analogRead(Receptor);    
  Serial.println(ValorSensor);
  delay(300);  
}
