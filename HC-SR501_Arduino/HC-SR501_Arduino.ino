//Recebe o sinal do sensor como entrada
int sinalDoSensor = 3;

void setup() {
//Declara o sinal do sensor como entrada do arduino
  pinMode(sinalDoSensor, INPUT);
}

void loop() {  
  while(digitalRead(sinalDoSensor)==HIGH) {
    for(int freq = 500; freq<2000; freq+=1){
//Liga o alarme através da função TONE e altera a frequência
      tone(7,freq);
      delay(6);
    }
  }
  noTone(7);
}
