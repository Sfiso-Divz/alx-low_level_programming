#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print a random number
*Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if else (n < 0)
		printf("%d is negetive\n", n);
	else
		printf("%d is equals to zero\n", n);

	return (0);
}
