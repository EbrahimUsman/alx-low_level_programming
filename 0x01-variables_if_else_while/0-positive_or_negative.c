#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - this program check whether randomly generated number is positive, negative or zero
 * Retrun: it returns zero if executed corectly or non-zero otherwise
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n >  0)
	{
		printf("%d\n is positive", n);
	}
	else if(n == 0)
	{
	printf("%d\n is zero", &n);
	}
	else
	{
		printf("%d\n is negative", n);
	}

	return (0);
}
