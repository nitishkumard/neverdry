#ifndef NeverDryLDR_H
#define NeverDryLDR_H

#include <Arduino.h>

class NeverDryLDR { 
public:

	NeverDryLDR(int);
	~NeverDryLDR();  
	boolean isSunRiseEvent();
	boolean isSunSetEvent();
	boolean isDark();
};

#endif