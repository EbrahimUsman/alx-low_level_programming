#include <stdlib.h>
#include <stdio.h>
#include <time.h>


/**
 * main - this program check whether randomly generated number
 * Return: 0 executed corectly or non-zero otherwise
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n >  0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
