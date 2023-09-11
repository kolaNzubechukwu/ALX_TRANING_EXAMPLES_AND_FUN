#include <stdio.h>
#include <string.h>
int check_char(char *star, char *hex)
{
    int i, n = strlen(hex);
    int y, m = strlen(star);
    for (i = 0; i < n; i++)
    {
        for (y = 0; y < n; y++)
        {
            if (hex[i] == star[y])
                printf("%c\n", hex[i]);
            //else  if (hex[i] != star[y])
             //   printf("omm %c", hex[i]);
        }
    }
}
