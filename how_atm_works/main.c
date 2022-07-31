#include "atm.h"

int cardNo;
int transNo;
User *current_user;

int main(void)
{
	printf("Enter your 6 digit card number: ");
	scanf("%d", &cardNo);

	/* check if card is fake or original */
	isfake();

	current_user = bankNetwork();
	auth(current_user);
	printf("Transactions\n");
	printf("1- Transfer\t\t2- Withdrawal\n");
	printf("3- Inquiry\t\t4- Bill Payment\n");
	printf("4- Check deposit\t6- Cash deposit\n");

	printf("Enter selected transaction number: ");
	scanf("%d", &transNo);

	transaction(current_user);
	return (0);
}


