// SignalProcessing.h
#include "main.h"
#include "stm32f4xx_hal_gpio.h"
#include "stm32f407xx.h"
#ifndef SIGNAL_PROCESSING
#define SIGNAL_PROCESSING


void executeTriger(GPIO_PinState PinState, uint16_t* outTriger);
float requiredVoltageRheostatControl(float u_fb, float u_dc);   // u_out = |u_fb - 1.6|*u_dc/1.6
																// u_fb - voltage from divider
																// u_dc - source voltage
uint32_t calculationCMP(float u_ref, float u_dc, float MaxCMP, float u_fb); // CMP is calculated for forward and reverse stroke, do not forget to change the value of INT2 for the L289N chip
															 				// u_ref - Required voltage at the output of the H-bridge
																			// u_dc - source voltage
																			// MaxCMP - The maximum value of the PWM counter corresponds to the value "htim_х.Init.Period"
																			// u_fb - voltage from divider.
																			// When the voltage is greater than 1.6V: CMP = u_ref / u_dc * MaxCMP
																			// At less than 1.6V: CMP = [1 - u_ref / u_dc] * MaxCMP
#endif // SIGNAL_PROCESSING
