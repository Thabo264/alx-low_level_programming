#include "main.h"
#include <unstd.h>

/**
 * _putchar _wites the character c stdout
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned, nd errno is set appropriately
 */
int_putchar(char c)
{
	return(write(1, &c, 1));
}
