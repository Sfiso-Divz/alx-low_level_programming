#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Print alphabets in lower case and then uppercase
*Return: 0
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

Return:(0);
}
