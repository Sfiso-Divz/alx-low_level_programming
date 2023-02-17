#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Print all single digit numbers of base 10 starting from 0
*Return: 0
*/

int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
