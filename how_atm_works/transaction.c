#include "atm.h"

extern int transNo;

void transaction(User *user)
{
	printf("connecting to bank network...\n");

	switch (transNo)
	{
	default:
		printf("No such action\n");
	case 1:
		//transfer();
		break;
	case 2:
		withdraw(user);
		break;
	case 3:
		//inquiry();
		break;
	case 4:
		//billpayment();
		break;
	case 5:

		break;
	case 6:

		break;
	}
}
