#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lower case
 * Return: returns zero if success
 * */

int main(void)
{

	int n;
	int char ch;
	for(n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for(ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
