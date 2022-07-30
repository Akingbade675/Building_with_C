#include <stdio.h>

/**
 * elevator - call an elevator
 * @left: the current floor of the left elevator
 * @right: the current floor of the left elevator
 * @call: the floor that called an elevator
 
 *Return: the name of the elevator closest to the called floor. In case where both elevator are equally distant from the called floor, return the elevator to the right.
 */
const char* elevator(int left, int right, int call)
{
	if (call == 1 || call == right)
		return ("right");
	else if (call + 1 == left || call - 1 == left)
		return ("left");
	else if(call == left && call != right)
		return ("left");
	else
		return ("right");
}

int main(void)
{
	int left, right, call;
	printf("Enter the current floor of the left elevator: ");
	scanf("%d", &left);
	printf("Enter the current floor of the right elevator: ");
	scanf("%d", &right);
	printf("Enter the floor that called an  elevator: ");
	scanf("%d", &call);
	printf("calling the closest elevator\n");
	printf(".\n");
	printf(".\n");
	printf(".\n");
	printf("%s", elevator(left, right, call));
	return (0);
}
