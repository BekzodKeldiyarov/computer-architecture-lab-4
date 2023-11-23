#include <stdio.h>
#include "LPC17xx.H"
#include "led/led.h"
#include "button_EXINT/button.h"

extern unsigned char led_value;

int main(void)
{
	SystemInt();
	LED_init();
	BUTTON_init();

	while (1)
	{
	}
}
