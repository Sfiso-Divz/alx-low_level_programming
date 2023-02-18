#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Write a program that prints all possible different combinations of two digits.
*Return: 0
*/

int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;

		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar();
				putchar();

				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c++
		}
		d++
	}
	putchar('\n');
	return (0);
}
