#include "main.h"

/**
 * print_alphabet - this function prints alphabets in lower case
 *
 * Return: always 0 (Success)
 */
void print_alphabet(void)
{
	char f;

	for (f = 'a'; f <= 'z'; f++)
	{
		_putchar (f);
	}
	_putchar ('\n');
}
