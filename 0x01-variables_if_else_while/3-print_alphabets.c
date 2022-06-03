#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints characters of upper case and lower case
 * Return: prints 0 if runs correctly none-zero
 * */
int main(void)
{
	char m = 'a';

	while(m <= 'z')
	{
		if (m != 'e' && m != 'q')
		{
			putchar(m);
		}
		m++;
		putchar('\n');
	printf("\n");
	return (0);
}
