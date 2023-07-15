int led=6;
int val=5;
  int ov=0;
  void setup() {
 pinMode(led,OUTPUT);
}
void loop() { 
  analogWrite(led, ov);

  ov = ov + val;

  if (ov <= 0 || ov >= 255) {
    val = -val;
  }
  delay(30);
}