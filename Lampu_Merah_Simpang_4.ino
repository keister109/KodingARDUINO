void setup() {
  // ----------pin 2 s/d pin 13 sebagai dig output
  for(char i=2;i<14;i++){
    pinMode(i,OUTPUT);
  }
 //---------Matikan Semua LED
 for(char i=2;i<14;i++){
  digitalWrite(i,0);
 }
 //---------Hidupkan H1 + M2 + M3 + M4//merah hidup Semua
 digitalWrite(2,1);
 digitalWrite(7,1);
 digitalWrite(10,1);
 digitalWrite(13,1);
}

void loop() {
  // --------Hidupkan H1 + M2 + M3 + M4 On//Hijau simpang pertama Hidup 
 digitalWrite(2,1);
 digitalWrite(3,0);
 digitalWrite(4,0);
 delay(5000);
 // --------Hidupkan K1 + M2 + M3 + M4 On//Kuning simpang pertama hidup
 digitalWrite(2,0);
 digitalWrite(3,1);
 digitalWrite(4,0);
 delay(2000);
 // --------Hidupkan M1 + M2 + M3 + M4 On//merah simpang pertama Hidup
 digitalWrite(2,0);
 digitalWrite(3,0);
 digitalWrite(4,1);
 delay(1000);
 // --------Hidupkan M1 + M2 + M3 + M4 On//Hijau simpang kedua Hidup
 digitalWrite(5,1);
 digitalWrite(6,0);
 digitalWrite(7,0);
 delay(5000);
  // --------Hidupkan M1 + M2 + M3 + M4 On//Kuning simpang ketiga Hidup
 digitalWrite(5,0);
 digitalWrite(6,1);
 digitalWrite(7,0);
 delay(2000);
  // --------Hidupkan M1 + M2 + M3 + M4 On//Merah Simpang Ketiga Hidup
 digitalWrite(5,0);
 digitalWrite(6,0);
 digitalWrite(7,1);
 delay(1000);
 
 // --------Hidupkan M1 + M2 + M3 + M4 On
 digitalWrite(8,1);
 digitalWrite(9,0);
 digitalWrite(10,0);
 delay(5000);
  // --------Hidupkan M1 + M2 + M3 + M4 On
 digitalWrite(8,0);
 digitalWrite(9,1);
 digitalWrite(10,0);
 delay(2000);
  // --------Hidupkan M1 + M2 + M3 + M4 On
 digitalWrite(8,0);
 digitalWrite(9,0);
 digitalWrite(10,1);
 delay(1000);
  // --------Hidupkan M1 + M2 + M3 + M4 On
 digitalWrite(11,1);
 digitalWrite(12,0);
 digitalWrite(13,0);
 delay(5000);
   // --------Hidupkan M1 + M2 + M3 + M4 On
 digitalWrite(11,0);
 digitalWrite(12,1);
 digitalWrite(13,0);
 delay(2000);
   // --------Hidupkan M1 + M2 + M3 + M4 On
 digitalWrite(11,0);
 digitalWrite(12,0);
 digitalWrite(13,1);
 delay(1000);
}
