#include "SignalProcessing.h"

void executeTriger(GPIO_PinState PinState, uint16_t* outTrigger){
	static GPIO_PinState lastPinState = GPIO_PIN_RESET;
	if ((PinState == GPIO_PIN_SET) && (lastPinState == GPIO_PIN_RESET)) {
		*outTrigger = 1;
	}else{
		*outTrigger = 0;
	}// if end
	lastPinState = PinState;
};//
//<>
float requiredVoltageRheostatControl(float u_fb, float u_dc){
	float u_out = (u_fb - 1.6) * u_dc / 1.6;
	if(u_out < 0){
		u_out = (-1.0) * u_out;
	}else{
		u_out = u_out;
	}
	return u_out;
};//
//<>
uint32_t calculationCMP(float u_ref, float u_dc, float MaxCMP, float u_fb){
	uint32_t CMP = 0;
	if(u_ref > 3.2) u_ref = 3.2;
	if(u_ref < 0.0) u_ref = 0;

	if(u_fb >= 1.6){
		CMP = u_ref / u_dc * MaxCMP;
	}else{
		CMP = (1.0 - u_ref / u_dc) * MaxCMP;
	}

	return CMP;
};//
//<>
