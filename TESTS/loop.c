#include <stdio.h>


int main(void)
{
	int i, y;

	for (i = 0; i <= 23; i++)
	{
		for (y = 0; y <= 59; y++)
		{
			printf("%d%d : %d%d, \n ", (i / 10), (i % 10), (y / 10), (y % 10));
		}
	}
	return (0);

}
