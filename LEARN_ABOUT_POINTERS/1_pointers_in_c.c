#include <stdio.h>




int main()
{
	int i;
	int *p = &i;
	printf("sizeofpointer: %lu\n", sizeof(p));

	printf("size of int %lu\n", sizeof(i));
	char array[] = "main";
	int n = sizeof(array);


//	char *point[] = &array;
//	printf("point : %p", point);
//
//	
	printf("array %p \n", array);
	printf("array[1] %c \n", array[1]);
	printf("array %p \n", &array);
	for (i = 0; i <= n; i++)
	{
		printf("array[i] %c\n", array[i]);
		printf("derefrenced array %c\n", *array);
	}

	return 0;
}
