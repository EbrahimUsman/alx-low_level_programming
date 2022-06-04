#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints characters of upper ca
 * se and lower case
 * Return: prints 0 if runs correctly none-zero
 */
int main(void)
{
	char m = 'a';

	for (m = 'a'; m <= 'z'; m++)
		putchar(m);
	for (m = 'A'; m <= 'Z'; m++)
		putchar(m);
	putchar('\n');
	printf("\n");
	return (0);
}
