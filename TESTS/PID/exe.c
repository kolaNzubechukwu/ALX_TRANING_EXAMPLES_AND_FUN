#include <stdio.h>

int main() {
     char *s;
        printf("$ ");
        scanf("%s", s);
        int i;
        int y = 0;
         //printf("%i\n i : %i", y, i);
        while (s[y] != '\0')
                y++;
        //printf("%i", y);
        for (i = 0; i <= y; i++)
                printf("%c", s[i]);
    // Write C code here
    printf("Hello world");

    return 0;
}
