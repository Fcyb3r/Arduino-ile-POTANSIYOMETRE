//gece lambası pro
//----------------------
//malzemeler
//potansiyometre mod.
//pinoo
//led
//pwm pin255.75

int pot = A0;
int led = 3;

void setup() {
  //bir kere çalışır

  pinMode(pot, INPUT); //fiziksel müdahalede bulunucağımız için input çektik
  pinMode(led, OUTPUT); //yesil led output çektik
  Serial.begin(9600);

}
void loop() {

  int potdeger = analogRead(pot);
  Serial.println("Pot değeri:");
  Serial.println(potdeger);
  delay(100);
  analogWrite(led, potdeger / 4); // 1023/4 işlemi ile
 /*
  *  pwm 0-255 arası çalışır
  */
}
