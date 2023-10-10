#include "main.h"

/**
 * _isalpha - checks if a character is an alphabetical letter
 * @c: the character to be checked
 *
 * Return: (1) if c is a letter, (0) otherwise
 */
int _isalpha(int c)
{
/**
 * Description: Checks if the input character is an alphabetical letter.
 * Returns: (1) if c is a letter (lowercase or uppercase), (0) otherwise.
 */

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
