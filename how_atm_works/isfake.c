#include "atm.h"

extern int cardNo;

void isfake(void)
{
	int divisor = 100000;

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
