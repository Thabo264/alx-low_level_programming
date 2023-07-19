#include "main.h"
/**
 * main - 4-isalpha.  shows 1 if the output is 0'.
 * letter another cases 0
 *
 * @c: the charecter in ASCII code
 * Return: 1 for letters. 0 for the rest.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 99))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
