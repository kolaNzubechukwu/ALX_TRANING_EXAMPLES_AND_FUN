#include "main.h"

void rev_string(char *s)
{
	int y, a, i;
	char swap[] = " ";

	while (s[y] != '\0')
		y++;
	for (i = y; s[i] != '\0'; i--)
	{
		swap[a] = s[y];
		a++;
	}
	swap[a] = '\0';
	printf("%s", swap);
}
int main()
{
	char s[] = "my school";
	rev_string(s);
}




