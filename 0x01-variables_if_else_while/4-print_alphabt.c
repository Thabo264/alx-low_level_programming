#include <stdio.h>
#include <stdlib.h>
/**
 * main - 4-print_alphabt.c.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 97, i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
