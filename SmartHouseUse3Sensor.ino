#include <LiquidCrystal.h>
//copyright by kevin antony k

//inisialisasi Pin yang digunakan Pada Arduino
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);//Pin Untuk LCD
const int ldr = A0;//Pin Untuk Sensor LDR
const int sensorT=A1;
float suhu;
#define echoPin 9 // Pin untuk Echo Pada HC-SR04
#define trigPin 10 //Pin untuk trig Pada HC-SR04

//pin yang digunakan Untuk OUTPUT
const int kipas =6;
const int buzzer =7;
const int led1 = 8;

// Mendefinisikan variable
long duration; // variabel untuk durasi perjalanan gelombang suara
int distance; // variabel untuk pengukuran jarak

void setup(){
  // inisialisasikan LCD yang digunakan
  lcd.begin(16, 2);
  pinMode(kipas,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT); // Menetapkan trigPin sebagai OUTPUT
  pinMode(echoPin, INPUT); // Menetapkan echoPin sebagai INPUT
  Serial.begin(9600); // //Komunikasi Serial dimulai dengan kecepatan baudrate 9600
  Serial.println("Ultrasonic Sensor HC-SR04 Test"); // cetak beberapa teks di Serial Monitor
  Serial.println("with Arduino UNO R3");
}

void loop(){
  //baca LDR Sensor
  int nilai = analogRead(ldr);//baca nilai sensor
  Serial.print("NILAI LDR: "); // cetak texk "Nilai LDR" pada serial Monitor
  Serial.println(nilai);//cetak nilai sensor ldr pada serial monitor
  lcd.setCursor(0,0);
  lcd.print(nilai);

  
   //baca temperature dari LM35
  int nilDigital=analogRead(sensorT);
  //konversikan ke derajad cescius
  suhu=(5.0 * nilDigital * 100.0)/1024.0;
  //Set kolom 0 dan baris 1 LCD dan Tampilkan
  lcd.setCursor(8, 0);
  lcd.print(suhu);
   

    // Menghapus kondisi trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
      lcd.setCursor(3, 1);
  lcd.print(distance);
  lcd.setCursor(6, 1);
  lcd.print("cm");
   lcd.setCursor(0, 1);
  lcd.print("$$");
   lcd.setCursor(14, 1);
  lcd.print("$$");
   

  
if (nilai <200){
  
  digitalWrite(led1, HIGH);
  Serial.print("Lamp ON : ");
  lcd.setCursor(3,0);
  lcd.print("-ON");
  Serial.println(nilai);
  
 delay(300);

    }
 else if(nilai >200) {
  
digitalWrite(led1, LOW);
lcd.setCursor(3,0);    
lcd.print("-OFF ");
Serial.print("Lamp OFF : ");
Serial.println(nilai);
}
  if (suhu >60){
      digitalWrite(kipas,HIGH);
       lcd.setCursor(14,0);
    lcd.print("ON");
    delay(300);
      } 
      
else if(suhu <60){
  digitalWrite(kipas,LOW);
  lcd.setCursor(13,0);
  lcd.print("OFF");
}

if (distance >5){
  digitalWrite(buzzer,HIGH);
         lcd.setCursor(9,1);
    lcd.print("OPEN");
  delay(300);
  
}
else if (distance <5){
  digitalWrite(buzzer,LOW);
       lcd.setCursor(9,1);
    lcd.print("CLOSE");
  delay(300);}
   lcd.clear();
}
 
