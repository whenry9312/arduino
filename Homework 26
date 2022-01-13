#include "LiquidCrystal.h"

LiquidCrystal LCD(48, 46, 50, 51, 52, 53);


#define RW 47

void setup(){
  pinMode(RW,OUTPUT);
  digitalWrite(RW,0);
  LCD.begin(20,2);
}
void loop(){
  int i,a,b;
  for(i=0;i<=99;i++){
    a=i/10;
    LCD.print(a);
    b=i%10;
    LCD.print(b);
    LCD.setCursor(0,0);
    delay(100);
  }
}
