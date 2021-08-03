#include <LiquidCrystal.h>
//inisialisasi koneksi pin lcd dengan pin arduino
LiquidCrystal lcd(2,3,5,4,11,12);
const int sensorT=A1;
float suhu;
//inisialisasi pin LED

const int pinLed5=6;
void setup(){
  //inisialisasi LCD yang digunakan :
  lcd.begin(16, 2);
  lcd.print("Temperature:");
  //inisialisasi Digital pin 6,7,8,9,10 out put
  pinMode(pinLed5,OUTPUT);
}

void loop(){
  //baca temperature dari LM35
  int nilDigital=analogRead(sensorT);
  //konversikan ke derajad cescius
  suhu=(5.0 * nilDigital * 100.0)/1024.0;
  //Set kolom 0 dan baris 1 LCD dan Tampilkan
  lcd.setCursor(0, 1);
  lcd.print(suhu);
  lcd.println("Celcius");
  delay(300);//delay 300ms

  if(suhu >= 40)
  {
  digitalWrite(pinLed5, HIGH); // LED5 menyala
}
else if(suhu > 20)
{

  digitalWrite(pinLed5, LOW); // LED5 menyala
}
else if(suhu > 25){

  digitalWrite(pinLed5, HIGH); // LED5 menyala
}
else {

  digitalWrite(pinLed5, HIGH); // LED5 menyala
}
}
