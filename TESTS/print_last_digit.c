#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int y = n % 10;
	if (y > 5)
	{
		printf("%d is greater than 5: the string and is greater than 5", y);
	}
	else if (y == 0)
	{
		printf("%d and is 0", y);

	}
	else if (y < 6)
	{
		printf("%d and is less than 6 and not 0", y);
	}
	return (0);
}
