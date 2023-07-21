#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: zero if successful
 */
int main(void)
{
	int val_1, val_2;

	for (val_1 = 0; val_1 < 10; val_1++)
	{
		for (val_2 = 0; val_2 < 10; val_2++)
		{
			putchar(val_1 + '0');
			putchar(val_2 + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return 0;

}
