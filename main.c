#include <reg52.h>

sbit LED = P1^5;

void Delay(unsigned int delay)
{
	unsigned int n;
	while(delay > 0)
	{
		for(n=0; n<127; n++)
		{
			1==1;
		}
		delay--;
	}
}
void main(void)
{
	while(1)
	{
		LED = ~LED;
		Delay(100);
	}
	return;
}