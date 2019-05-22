#include <LiquidCrystal_I2C.h>
#include <LiquidCrystal.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

int bottone1 = 7;
int bottone2 = 8;
int bottone3 = 9;
int bottone4 = 10;
int bottone5 = 11;
int btnInizio = 2;
int vite = 5;
int punti = 0;
void setup() {
  // put your setup code here, to run once:
  
  lcd.init();
  lcd.backlight();
  pinMode(bottone1, INPUT);
  pinMode(bottone2, INPUT);
  pinMode(bottone3, INPUT);
  pinMode(bottone4, INPUT);
  pinMode(bottone5, INPUT);
  pinMode(btnInizio, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(digitalRead(btnInizio) == LOW){}
  while ( vite > 0)
  {
    lcd.clear();
    lcd.print("vite:" + String(vite));
    lcd.setCursor(10, 0);
    lcd.print("pt:" + String(punti));
    delay(1500);
    int posizione = random(1, 5);
    if (posizione == 1)
    {
      posizione = 2;

    }
    else if (posizione == 2)
    {
      posizione = 5;
    }
    else if (posizione == 3)
    {
      posizione = 8;
    }
    else if (posizione == 4)
    {
      posizione = 11;
    }
    else if (posizione == 5)
    {
      posizione = 14;
    }

    lcd.setCursor(posizione, 1);
    lcd.print("π");
    int premuto = 0;
    int i = 0;
    while (premuto == 0 && i < 1500)
    {
      if (digitalRead(bottone1) == HIGH)
      {
        premuto = 2;
      }
      else if (digitalRead(bottone2) == HIGH)
      {
        premuto = 5;
      }
      else if (digitalRead(bottone3) == HIGH)
      {
        premuto = 8;
      }
      else if (digitalRead(bottone4) == HIGH)
      {
        premuto = 11;
      }
      else if (digitalRead(bottone5) == HIGH)
      {
        premuto = 14;
      }
      i++;
      delay(1);
    }
    lcd.clear();
    if (premuto == posizione)
    {
      punti = punti + 1;
    }
    else
    {
      vite = vite - 1;
    }

    lcd.print("vite:" + String(vite));
    lcd.setCursor(10, 0);
    lcd.print("pt:" + String(punti));
  }
}
