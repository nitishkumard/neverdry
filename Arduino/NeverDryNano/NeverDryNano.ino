#include <NeverDryPump.h>
#include <NeverDryLDR.h>

NeverDryPump neverDryPump1 = NeverDryPump(2,3);
NeverDryLDR neverDryLDR = NeverDryLDR(7);

void setup() 
{
  Serial.begin(9600);

  // Instantiating objects
  neverDryPump1 = NeverDryPump(2,3);
  neverDryLDR = NeverDryLDR(7);
}

void loop() 
{
  if(neverDryLDR.isSunRiseEvent() || neverDryLDR.isSunSetEvent())
  {
    neverDryPump1.runPumpMotorForDuration(5000); 
  }
  delay(3600000);
}





