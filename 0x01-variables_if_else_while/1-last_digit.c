#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this programs checks tha last digit of a number whether it is greater than 5 or 0 or less than 6
 * Return: it returns 0 if run correctly none-zero otherwise
 */
	int main(void)
	{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int m;
	 m = n % 10;
		if(n > 5)
		{	
		printf("Last digit of %d is greater than 5\n", n);
		}
		else if(n == 0)
		{
		printf("Last digit of %d is 0\n", n);
		}
		else
		{	
		printf("Last digit of %d is less than 6 and not 0\n", n);
		}
	return (0);
	}
