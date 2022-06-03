#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints characters of upper case and lower case
 * Return: prints 0 if runs correctly none-zero
 * */
int main(void)
{
	char m = 'a';

	for(m = 'a'; m <= 'z'; m++)
		putchar(m);

	for(m = 'z'; m >= 'a'; m--)
		
		putchar(m);
		
	putchar('\n');
	printf("\n");
	return (0);
}
