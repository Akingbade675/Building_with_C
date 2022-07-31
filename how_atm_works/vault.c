#include "atm.h"

void vault(int amount)
{
	static int vault_bal = 50000;

	vault_bal += amount;
	if (vault_bal < 0)
	{
		printf("No more money, try again later\n");
		exit(10);
	}
}
