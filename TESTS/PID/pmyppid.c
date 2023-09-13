#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pi_d;

	pi_d = getppid();
	printf("%u\n", pi_d);
	return (0);
}
