#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}


	if (n == 0)
		_putchar('0');


	int rev = 0;


	while (n != 0)
	{
		rev = rev * 10 + n % 10;
		n /= 10;
	}


	while (rev != 0)
	{
		_putchar((rev % 10) + '0');
		rev /= 10;
	}
}
