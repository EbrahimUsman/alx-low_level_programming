#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints characters in lowercase
 * Return: returns zero if successful
 * */
int main(void)
{
	char ch;
	for(ch = 'a'; ch <= 'z'; ch++){
		putchar(ch);
	}
	putchar("\n");
	return (0);
}

