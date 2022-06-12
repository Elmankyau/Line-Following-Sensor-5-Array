int ira = 25, irb = 26, irc = 27, ird = 22, ire = 23;

int ir1, ir2, ir3, ir4, ir5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  pinMode(ira, INPUT);
  pinMode(irb, INPUT);
  pinMode(irc, INPUT);
  pinMode(ird, INPUT);
  pinMode(ire, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  ir1 = digitalRead(25);
  ir2 = digitalRead(26);
  ir3 = digitalRead(27);
  ir4 = digitalRead(22);
  ir5 = digitalRead(23);

  if (ir1 == 0 && ir2 == 1 && ir3 == 1 && ir4 == 1 && ir5 == 1 ) {
    Serial.print("ir1");
    delay(20);
    Serial.println();
  }
  if (ir1 == 1 && ir2 == 0 && ir3 == 1 && ir4 == 1 && ir5 == 1 ) {
    Serial.print("ir2");
    delay(20);
    Serial.println();
  }
  if (ir1 == 1 && ir2 == 1 && ir3 == 0 && ir4 == 1 && ir5 == 1 ) {
    Serial.print("ir3");
    delay(20);
    Serial.println();

  }
  if (ir1 == 1 && ir2 == 1 && ir3 == 1 && ir4 == 0 && ir5 == 1 ) {
    Serial.print("ir4");
    delay(20);
    Serial.println();
  }
  if (ir1 == 1 && ir2 == 1 && ir3 == 1 && ir4 == 1 && ir5 == 0 ) {
    Serial.print("ir5");
    delay(20);
    Serial.println();
  }

}
