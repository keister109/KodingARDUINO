#include <LiquidCrystal.h>

//inisialisasi koneksi pin LCD dengann Pin arduino

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int led1 = 10;
const int led2 = 9;
const int led3 = 8;
const int led4 = 7;
const int led5 = 6;

void setup(){
  // inisialisasikan LCD yang digunakan
  lcd.begin(16, 2);
  //Buatlah ketika simulasi dijalankan tampilan awal LCD (Liquid Crystal Display) Nama mahasiswa dan Nim mahasiswa selama 5 detik 
  lcd.setCursor(0,0);
  lcd.print("Nama : Kevin A.K");
  lcd.setCursor(0,1);
  lcd.print("Nim : 1922003 R");
  delay(5000);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  Serial.begin(9600);
  lcd.clear();
}

void loop(){
  //Hidupkan semua LED dan buatlah tampilan LCD selama 3 detik 
  lcd.setCursor(0,0);
  lcd.print("Lampu ON Semua");
  lcd.setCursor(0,1);
  lcd.print("Mantap !!!");
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  delay(3000);
  lcd.clear();
  //Hidupkan LED 1, 3, 5, dan tampilan LCD selama 2,5 detik
  lcd.setCursor(0,0);
  lcd.print("Lampu 135 ON");
  lcd.setCursor(0,1);
  lcd.print("Keren !!!");
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
  digitalWrite(led5,HIGH);
  delay(2500);
  lcd.clear();
  //Hidupkan LED 2, 4, dan tampilan LCD selama 4 detik 
      lcd.setCursor(0,0);
  lcd.print("Lampu 2 & 4 ON");
  lcd.setCursor(0,1);
  lcd.print("Bagus !!!");
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,LOW);
  delay(4000);
  lcd.clear();
  //Buat variasi lain menghidupkan LED dan LCD selama 2 detik
  lcd.setCursor(0,0);
  lcd.print("Nama : Kevin A.K");
  lcd.setCursor(0,1);
  lcd.print("Nim : 1922003 R");
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  delay(2000);
  lcd.clear();
}
 
