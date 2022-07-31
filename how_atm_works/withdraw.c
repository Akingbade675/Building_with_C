#include "atm.h"
int acct_type, amt;

void withdraw(User *u)
{
	printf("Select an account type:");
	printf("1- savings\t2- credit\t3-current\n");
	scanf("%d", &acct_type);

	printf("select an amount to withdraw: \n");
	printf("1- 1000\t\t\t4- 10000\n");
	printf("2- 2000\t\t\t5- 50000\n");
	printf("3- 5000\t\t\t6- Others\n");

	scanf("%d", &amt);
	if (amt == 6)
	{
		printf("Enter amount to withdraw in multiples of 1000: ");
		scanf("%d", &amt);
	}

	if (u->balance < amt)
	{
		printf("You don't have enough balance in your account\n");
		exit(1);
	}

	vault(amt * -1);
	u->balance -= amt;
	printf("You withdrew %d\n", amt);
	printf("Do you want to print the receipt [y/n]: ");
	char b;

	scanf("%c", &b);

	if (b == 'y' || b == 'Y')
		print_receipt(u, amt);
	printf("Would you like to perform another transaction? [y/n]: \n");

}
