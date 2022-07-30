#include "main.h"

extern int pword;
extern int cardNo;

int auth(void)
{
	int *arr_pass;
	int n, i;
	int _cardNo = cardNo;

	arr_pass = malloc(sizeof(*arr_pass) * 4);

	for (i = 3; i >= 0; i--)
	{
		n = _cardNo % 10;
		arr_pass[i] = n;
		if (arr_pass[i] != (pword % 10))
		{
			printf("Incorrect Pin, try again\n");
			return (1);
		}
		_cardNo /= 10;
		pword /= 10;
	}
	free(arr_pass);

	return (0);
}
