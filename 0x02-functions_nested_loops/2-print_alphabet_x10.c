#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return:void
 */

void print_alphabet_x10(void)
{
	int i = 0;

	for (i = 0 ; i < 10 ; i++)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;

		}
		_putchar('\n');
	}
}
