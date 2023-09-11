#include <stdio.h>
void print_rev(char *s)
{
    int i, y;
    while (s[i] != '\0')
    {
        i++;
    }
    for (y = i-1; i >= 0; i--)
    {
        putchar(s[i]);
    }
}
