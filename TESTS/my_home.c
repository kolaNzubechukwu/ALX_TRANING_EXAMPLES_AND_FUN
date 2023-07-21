#include <stdio.h>
/**
 * print_diagonal -  a function that draws a diagonal line on the terminal.
 * @n: stores int
 */
void print_diagonal(int n)
{
	int j;
	int u;

	for (j = 0; j <= n; j++)
	{
		if (j > 1)
			u = j - 1;

		u  = 0;


		while (u < j)
		{
			printf(" ");
			u++;
		}
		printf("\\");
		printf("\n");
	}
}

