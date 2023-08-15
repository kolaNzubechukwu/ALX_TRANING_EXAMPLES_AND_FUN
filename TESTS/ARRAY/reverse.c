#include "main.h"


void puts_half(char *str)
{
    int i, numstrlen, yam, n, b, h;
    while(str[i] != '\0')
        i++;
         
        numstrlen = i - 1;
        yam = (numstrlen % 2);
 
    if (yam = 1)
        n = (numstrlen / 2);
    else
        n = ((numstrlen - 1) / 2);
      
     for (h = 0; h <= n; h++)
        putchar(str[b]);
    putchar('\n');
    
    for (b = n; b <= numstrlen; b++)
        putchar(str[b]);
    
}
