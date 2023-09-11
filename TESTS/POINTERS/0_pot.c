#include <stdio.h>

char *cap_string(char *s)
{
	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};
}
int check_char(char *s, char *check)
{
	int i, n = strlen(s);
	for (i = 0; i < n; i++)
	{
		for (y = 0; y < n; y++)
		{
			if (s[i] == s[y])
			{
				return (1);
			}
			else if (s[i] != s[y])
			{
				return (0);
			}
		}
	}
}
