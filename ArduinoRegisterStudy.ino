void setup() {
  DDRB = B00011100; // Configura os pinos 8, 9 e 10 como saída
  DDRD = B00011100; // Configura os pinos 2, 3 e 4 como entrada
}

void loop() {
  if (PIND & B00000100) { // Se o botão 1 (pino 2) for pressionado
    if (PORTB & B00000100) { // Se a luz 1 (pino 8) estiver ligada
      PORTB = B00000000; // Desliga todas as luzes
    } else {
      PORTB = B00000100; // Liga a luz 1
    }
  } else if (PIND & B00001000) { // Se o botão 2 (pino 3) for pressionado
    if (PORTB & B00001000) { // Se a luz 2 (pino 9) estiver ligada
      PORTB = B00000000; // Desliga todas as luzes
    } else {
      PORTB = B00001000; // Liga a luz 2
    }
  } else if (PIND & B00010000) { // Se o botão 3 (pino 4) for pressionado
    if (PORTB & B00010000) { // Se a luz 3 (pino 10) estiver ligada
      PORTB = B00000000; // Desliga todas as luzes
    } else {
      PORTB = B00010000; // Liga a luz 3
    }
  }
}