#include <stdio.h>

/**
 * main - prints single digit number of base 10 starting from 0
 * Return: returns 0 if success
 * */

int main(void)
{
	int b;
	for(b = 48; b < 58; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
