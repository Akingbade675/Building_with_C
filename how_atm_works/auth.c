#include "atm.h"

int pword, i;
int *arr_pass;

int cPass(void)
{
	for (i = 3; i >= 0; i--)
	{
		if (arr_pass[i] != (pword % 10))
		{
			printf("Incorrect Pin, try again\n");
			return (1);
		}
		pword /= 10;
	}

	return (0);
}

void auth(struct User *u)
{
	int bool;

	arr_pass = u->pin;
	for (i = 0; i < 3; i++)
	{
		printf("Please Enter your Four digit PIN number and press ENTER\n");
		scanf("%d", &pword);

		/* authenticate PIN */
		bool = cPass();

		if (!bool)
		{
			printf("Correct PIN\n");
			return;
		}
		else
		{
			if (i == 2)
			{
				printf("You have entered incorrect PIN more than 3 times\n");
				printf("Your account has been blocked for 24hours\n");
				exit(1);
			}
			continue;
		}
	}
}
