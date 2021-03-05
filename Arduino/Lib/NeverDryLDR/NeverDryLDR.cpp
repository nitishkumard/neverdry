#include "NeverDryLDR.h"

int ldrPin;
String previousDayOrNightReading = "";

//<<constructor>> 
NeverDryLDR::NeverDryLDR(int pPin)
{
	ldrPin = pPin;
	pinMode(ldrPin, INPUT);
}

//<<destructor>>
NeverDryLDR::~NeverDryLDR()
{
	/*nothing to destruct*/
}

boolean NeverDryLDR::isSunRiseEvent() 
{
	if(previousDayOrNightReading == "Day")
	{
		return false;
	}
	else if (isDark())  
	{
		previousDayOrNightReading = "Day";
		return true;
	}
	return false;
}

boolean NeverDryLDR::isSunSetEvent() 
{
	if(previousDayOrNightReading == "Night")
	{
		return false;
	}
	else if (isDark()) 
	{
		previousDayOrNightReading = "Night";
		return true;
	}
	return false;
}

boolean NeverDryLDR::isDark() 
{	
	int ldrStatus = analogRead(ldrPin);
	if (ldrStatus <= 200) {
		return true;
	}
	else 
		return false;
}