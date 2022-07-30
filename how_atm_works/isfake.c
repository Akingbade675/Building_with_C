#include "main.h"

extern int cardNo;
int divisor = 100000;

void isfake(void)
{
	if (cardNo % 10 < 4 && cardNo / divisor < 4)
	{
		printf("The card %d is fake, Take your card now and run\n", cardNo);
		exit(98);
	}
	else
	{
		return;
	}
}
