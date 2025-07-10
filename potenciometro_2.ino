void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  int lectura = analogRead(A0);  // Lee el valor del potenciómetro
  int brillo;                    // Variable para almacenar el PWM

  // Escalado por tramos
  if (lectura == 0) {
    brillo = 0;
  } else if (lectura < 256) {
    brillo = 64;
  } else if (lectura < 512) {
    brillo = 128;
  } else if (lectura < 767) {
    brillo = 191;
  } else {
    brillo = 255;
  }

  analogWrite(9, brillo);
}
