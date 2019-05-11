#include <LiquidCrystal.h>
LiquidCrystal lcd (14, 11, 9, 7, 3);
int bottone1 = 2;
int bottone2 = 7;
int bottone3 = 8;
int bottone4 = 11;
int bottone5 = 13;
int vite = 5;
int punti = 0;
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
   pinMode(bottone1, INPUT);
   pinMode(bottone2, INPUT);
   pinMode(bottone3, INPUT);
   pinMode(bottone4, INPUT);
   pinMode(bottone5, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    int posizione =random(1,5);
    if(posizione == 1)
    {
      posizione = 2;
      
    }
    else if(posizione == 2)
    {
      posizione = 5;
    }
    else if(posizione == 3)
    {
      posizione = 8;
    }
    else if(posizione == 4)
    {
      posizione = 11;
    }
    else if(posizione == 5)
    {
      posizione = 14;
    }

    lcd.setCursor(poszione, 1);
    lcd.print("P");
    int premuto =0;
    int i = 0;
    while (premuto == 0 && i < 1500)
    {
      if(digitalWrite(bottone1)==HIGH)
      {
        premuto = 2;
      }
      else if(digitalWrite(bottone2)==HIGH)
      {
        premuto =5;
      }
      else if(digitalWrite(bottone3)==HIGH)
      {
        premuto =8;
      }
      else if(digitalWrite(bottone4)==HIGH)
      {
        premuto =11;
      }
      else if(digitalWrite(bottone5)==HIGH)
      {
        premuto =14;
      }
      i++;
      delay(1);
    }
  if(
  

}
