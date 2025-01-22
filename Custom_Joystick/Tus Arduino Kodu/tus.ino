#include <Keypad.h>

const byte satir=4;
const byte sutun=4;
int pot=0,button=23;
long potcikis;
int buttoncikis;


char tustakimi[satir][sutun]={
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};


byte satirpinleri[satir]={27,29,31,33};
byte sutunpinleri[sutun]={35,37,39,41};

Keypad keypad1 =Keypad(makeKeymap(tustakimi),satirpinleri,sutunpinleri,satir,sutun);

void setup() {
Serial.begin(9600);
 pinMode(A1,INPUT); 
 pinMode(23,INPUT);
}

void loop() {
 char tus = keypad1.getKey();
  if (tus != NO_KEY)
  {
    Serial.println(tus);
  }

  potcikis=analogRead(A1);
  //Serial.println(potcikis);
  buttoncikis=digitalRead(23);
  //Serial.println(buttoncikis);
  
  delay(20);
}
