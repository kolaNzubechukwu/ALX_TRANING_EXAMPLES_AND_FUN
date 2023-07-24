#include <stdio.h>


int main(void)
{
	int y, m, i;

	//for (y = 0; y <= 9; y++)
	//{
		for (i = 0; i <= 9; i++)
		{
			for (m = 0; m <= 9; i++)
			{
				printf("%d", (m * i));
			}
			putchar('\n');
		}
		return (0);
}
