#include <stdio.h>
/**
 * main - aprogram that prints all the arguments it recivec from the terminal
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	int i, numcount = (argc - 1);

	for (i = 1; i <= numcount; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
