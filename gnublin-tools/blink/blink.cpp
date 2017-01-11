/* made by :- mrityunjai.kmr@gmail.com */
#include "gnublin.h"

 
int main()
{
   gnublin_gpio gpio;
 
   gpio.pinMode(2,OUTPUT);
 
   while(1){
     gpio.digitalWrite(2,HIGH);
     sleep(1);
     gpio.digitalWrite(2,LOW);
     sleep(1);
   }
}
