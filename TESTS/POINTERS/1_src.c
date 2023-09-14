#include <stdio.h>



char *_strcpy(char *dest, char *src)
{
    int i;
    for (i = 0; i <= 98; i++)
    {
        dest[i] = src[i];
    }
    return (src);
}
