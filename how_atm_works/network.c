#include "atm.h"
#include <time.h>

extern int cardNo;
extern int pword;
int request;

struct User *bankNetwork(void)
{
	srand(time(NULL));
	request = rand() % 2;

	if (!request)
	{
		printf("No network, pls try again\n");
		exit(1);
	}
	struct User *c_user = malloc(sizeof(struct User));
	struct User cur_user = {getBalance(), getAcctType(), getPin()};

	c_user = &cur_user;
	return (c_user);
}

int getBalance(void)
{
	int bal = 0, i, cardbal;

	cardbal = cardNo;
	for (i = 0; i < 6; i++)
	{
		bal += cardbal % 10;
		cardbal /= 10;
	}
	bal *= 1000;
	return (bal);
}

char *getAcctType(void)
{
	srand(time(NULL));
	request = rand() % 2;

	if (request)
		return ("savings");
	return ("current");
}



int *getPin(void)
{
	int *arr_pass;
	int n, i, _pword = pword;
	int _cardNo = cardNo;

	arr_pass = malloc(sizeof(*arr_pass) * 4);

	for (i = 3; i >= 0; i--)
	{
		n = _cardNo % 10;
		arr_pass[i] = n;
		_cardNo /= 10;
		_pword /= 10;
	}

	return (arr_pass);
}
