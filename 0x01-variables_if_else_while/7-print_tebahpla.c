#include <stdio.h>


/**
 * main - prints lower case alphabets in reverse
 * Return: return 0 if success
 * */

int main(void)
{

	char a;
	for(a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');
	return (0);
}

