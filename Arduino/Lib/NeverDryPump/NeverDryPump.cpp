#include "NeverDryPump.h"

int motorpin1 = 2;
int motorpin2 = 3;

//<<constructor>> 
NeverDryPump::NeverDryPump(int pMotorpin1, int pMotorpin2)
{
	motorpin1 = pMotorpin1;
	motorpin2 = pMotorpin2;
	pinMode(motorpin1, OUTPUT);
	pinMode(motorpin2, OUTPUT);
}

//<<destructor>>
NeverDryPump::~NeverDryPump()
{
	/*nothing to destruct*/
}

void NeverDryPump::runPumpMotorForDuration(long duration) 
{
    //Controlling speed (0 = off and 255 = max speed):
    //analogWrite(9, 100); //ENA pin

    //Controlling spin direction of motors:
    digitalWrite(motorpin1, HIGH);
    digitalWrite(motorpin2, LOW);  
	delay(duration);
	stopPumpMotor();
}

void NeverDryPump::stopPumpMotor() 
{

    //Controlling speed (0 = off and 255 = max speed):
    //analogWrite(9, 100); //ENA pin

    //Controlling spin direction of motors:
    digitalWrite(motorpin1, LOW);
    digitalWrite(motorpin2, LOW);  
}