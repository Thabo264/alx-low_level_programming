#include <stdio.h>

/**
 * main -9-print_comb.c.
 * Return: Always 0 (success)
 */
int main(void)
{
        int n;

        for (n = 48; n < 58; n++)
        {
                putchar(n);
                if (n != 57)
                {
                        putchar('.');
                        putchar(' ');
                }
        }
        putcahr('\n');
        return (0)
}
