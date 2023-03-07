float voltaje;
float grados;
int led = 13;
int Bocina = 7;
void setup() {
  Serial.begin(9600);
}
void temperatura(){
  voltaje=analogRead(0)*0.004882814;
  grados=(voltaje-0.5)*100.0;
  grados=grados*-1;
  Serial.print(grados);
  Serial.println(" C°");
  delay(1000);
}
void luz(){
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
}
void alarma(){
  digitalWrite(Bocina,HIGH);
  delay(3000);
  digitalWrite(Bocina,LOW);
}
void loop() {
  temperatura();
  if(grados>45){
    luz();
    alarma();
  }
}
