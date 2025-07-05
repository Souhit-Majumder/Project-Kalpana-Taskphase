#include <Adafruit_LEDBackpack.h>

Adafruit_7segment display = Adafruit_7segment();

long int prevMillis = 0;
int hours = 0;
int minutes = 0;
int seconds = 0;

void setup()
{
  display.begin(0x70);
  display.setBrightness(12);
}

void loop()
{
  if(millis() - prevMillis >= 1000)	{
    prevMillis += 1000;
    seconds++;
    
    if(seconds >= 60)	{
      seconds = 0;
      minutes++;
    }
    
    if(minutes >= 60)	{
      minutes = 0;
      hours++;
    }
    
    if(hours >= 24)	
      hours = 0;
    
    timeDisplay();
  }
}

void timeDisplay()	{
  	unsigned int timeToDisplay = hours * 100 + minutes;
  	// display.print(timeToDisplay); // if 00:00 not needed
  
  	display.writeDigitNum(0, (timeToDisplay / 1000) % 10);
    display.writeDigitNum(1, (timeToDisplay / 100) % 10);
    display.writeDigitNum(3, (timeToDisplay / 10) % 10);
    display.writeDigitNum(4,  timeToDisplay % 10);
    display.drawColon(seconds % 2);
  	display.writeDisplay();
}

// Link to design: https://www.tinkercad.com/things/lJGLyFJCI9e-t3q1?sharecode=fzUdP-WsaM99Ck2XZhSoKfNugIT5cCoi99znjhqUFbU