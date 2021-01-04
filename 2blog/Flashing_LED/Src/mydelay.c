# include "mydelay.h"

//delay_us
void user_delay_us(uint16_t us) 
{ 
	for(; us > 0; us--) 
	{ 
		for(uint8_t i = 50; i > 0; i--) 
		{ 
			; 
		} 
	} 
}