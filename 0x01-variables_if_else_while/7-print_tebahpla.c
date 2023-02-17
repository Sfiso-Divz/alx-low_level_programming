#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Print all single digit numbers of base 10 starting from 0
*Return: 0
*/

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
