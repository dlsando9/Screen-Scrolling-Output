/*
Daisy Sandoval

Scrolling Output
             LCD RS pin to digital pin 12
             LCD Enable pin to digital pin 11
             LCD D4 pin to digital pin 5
             LCD D5 pin to digital pin 4
             LCD D6 pin to digital pin 3
             LCD D7 pin to digital pin 2
             Vdd to 5V power
             Vss to ground
             V0 to pentiometer
             ground to pentiometer

*/
#include<LiquidCrystal.h>

LiquidCrystal lcd(12,11,5 ,4,3,2);

 int quoteSize = 0;
String fullName = "Daisy Sandoval", substring [16];

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16,2); // for the name and LCD DISPLAY 16x2
}

void loop(){
 scroll("Arturo Sandoval Honda Ridgeline"); 
 
}
void scroll(String quote){
quoteSize = quote.length();
quote = quote + " ";

 for (int i = 0; i <=quoteSize; i++){
 lcd.setCursor(2,0);  
 lcd.print(fullName);

 lcd.setCursor(0,1);
 lcd.print(quote.substring(i, 16+i));
 
  delay(400);
  }
  
  
  
}
