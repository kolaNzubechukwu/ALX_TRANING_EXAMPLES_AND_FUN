#include <stdio.h>
#include <string.h>
int checkpassword(char *password);

int main()
{
	char password[50];
	char correct_password[] = "fransisco";
	printf("enter a password \"there should be no space maximum character of 50\": ");
	scanf("%s", password);
 	int i = checkpassword(password);
	if (i == 1) 
		printf("password :%s ✅\n", password);
	else
		printf("not correct\n");
	return (0);
}

int checkpassword(char *password)
{
	char correct_password[] = "fransisco";
	for (int i = 0; i <= strlen(correct_password) - 1; i++)
	{
		if (password[i] != correct_password[i])
			return 0;
	}
	return 1;
}
