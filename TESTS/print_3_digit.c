#include <stdio.h>


int main(void)
{
	int val, i, y;
	for (i = 0; i < 10; i++)
	{
		for (val = 0; val < 10; val++)
		{
			for (y = 0; y < 10; y++)
			{
				if (i < val && val < y)
				{
					putchar(i + '0');
					putchar(val + '0');
					putchar(y + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
