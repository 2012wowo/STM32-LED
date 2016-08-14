# include "sys.h"
# include "usart.h"
# include "delay.h"
# include "led.h"
int main (void)
{
	Stm32_Clock_Init(9);
	delay_init(72);
	LED_Init();
	while(1)
	{
		LED0=0;
		delay_ms(300);
		LED0=1;
		delay_ms(300);

	}
}
