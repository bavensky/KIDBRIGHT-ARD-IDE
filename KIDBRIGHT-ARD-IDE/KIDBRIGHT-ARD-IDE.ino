/*
   Kidbright32 GPIO test
*/

#define BT    17
#define WIFI  2
#define NTP   15
#define IOT   12

#define S1    16
#define S2    14

#define PWM   13

void setup() {

  Serial.begin(57600);

  pinMode(BT, OUTPUT);
  pinMode(WIFI, OUTPUT);
  pinMode(NTP, OUTPUT);
  pinMode(IOT, OUTPUT);

  // All LED was close
  digitalWrite(BT, HIGH);
  digitalWrite(WIFI, HIGH);
  digitalWrite(NTP, HIGH);
  digitalWrite(IOT, HIGH);

  pinMode(S1, INPUT_PULLUP);
  pinMode(S2, INPUT_PULLUP);

}

void loop() {
  Serial.print(digitalRead(S1));
  Serial.print("  ");
  Serial.print(digitalRead(S2));
  Serial.print("\n");
  delay(100);


}
