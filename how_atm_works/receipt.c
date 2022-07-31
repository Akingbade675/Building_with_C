#include "atm.h"

void print_receipt(User *u, int amount)
{
	extern int cardNo;

	printf("Card No => %d", cardNo);
	printf("Amount(DR) => %d", amount);
	printf("Balance => %d", u->balance);
	return;
}
