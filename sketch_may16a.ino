int relay = 2;
int relay4 = 4;

// La rutina setup se ejecuta al iniciar el Arduino o al presionar el boton reset
void setup() {                
// Inicialica el pin digital relay (que vale 2)  como salida
  pinMode(relay, OUTPUT);   
  pinMode(relay4, OUTPUT);  
}

// La rutina loop se ejecuta en forma infinita despues de inicializado el Arduino
void loop() {
  digitalWrite(relay, HIGH);   
  delay(1000); 
  digitalWrite(relay4, HIGH);
  delay(1000);                
  digitalWrite(relay, LOW);    
  delay(1000); 
  digitalWrite(relay4, LOW);
  delay(1000);   
  
  
}
