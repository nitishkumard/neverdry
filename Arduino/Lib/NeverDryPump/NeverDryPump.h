#ifndef NeverDryPump_H
#define NeverDryPump_H

#include <Arduino.h>

class NeverDryPump { 
public:

	NeverDryPump(int,int);
	~NeverDryPump();  
	void runPumpMotorForDuration(long);
	void stopPumpMotor();
};

#endif