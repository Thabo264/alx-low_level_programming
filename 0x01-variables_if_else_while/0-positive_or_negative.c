#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determines if a number is 0-positive_or_negative.c.
 *
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n,
	    srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is a zero\n", n);
	}
	else
		printf("%d is a negative\n", n);
	}
	return (0);
}
