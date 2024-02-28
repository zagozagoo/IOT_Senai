void setup() {
  //DDRB |= (1<<PB5); // Define a porta B5 como saída
  //0b100000
  
  DDRD = (0XFF); // Define todas as portas D como saída
}

void loop() {
  PORTD = (0XFF); // Define todas as portas como HIGH
  delay(1000); 
  PORTD = (0X0); // Define todas as portas como LOW
   delay(1000);
  
  //PORTB |= (1<<PB5); // Acende o LED
  
  //PORTB &= ~(1<<PB5); // Desliga o LED
}
// Os comentados são são do lado B (Porta B)
