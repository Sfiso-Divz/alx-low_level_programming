#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Print all single digit numbers of base 10 starting from 0
*Return: 0
*/

int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar('');
		}
		c++;
	}
}
