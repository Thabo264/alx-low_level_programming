#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 *
 * Return: On success, 1. On error, -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line
 *
 * Description: This function prints the lowercase alphabet using _putchar
 * You can only use _putchar twice in the code.
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
