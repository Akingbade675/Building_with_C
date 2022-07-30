#include "main.h"

int cardNo;
int i, pword, transNo;

int main(void)
{
	printf("Enter your 6 digit card number: ");
	scanf("%d", &cardNo);

	/* check if card is fake or original */
	isfake();

	for (i = 0; i < 3; i++)
	{
		printf("Please Enter your Four digit PIN number and press ENTER\n");
		scanf("%d", &pword);

		/* authenticate PIN */
		int bool = auth();
		if (!bool)
		{	
			printf("Correct PIN\n");
			break;
		}
		else
		{
			if (i == 2)
			{
				printf("You have entered incorrect PIN more than 3 times\nYour account has been blocked for 24hours\n");
				return (1);
			}
			continue;
		}
	}
	return (0);
}


