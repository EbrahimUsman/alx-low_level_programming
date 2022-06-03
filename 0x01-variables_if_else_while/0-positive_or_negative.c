#include <stdlib.h>
#include <stdio.h>
#include <time.h>


/**
 * main - this program check whether randomly generated number is positive, negative or zero
 * Return: it returns zero if executed corectly or non-zero otherwise
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n >  0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
