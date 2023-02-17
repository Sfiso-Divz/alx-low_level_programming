#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Print alphabets in lower case using putchar
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
	putchar('\n');
	return (0);
}
