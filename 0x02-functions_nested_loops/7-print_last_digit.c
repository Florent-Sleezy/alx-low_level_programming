#include "main.h"

/**
 * print_last_dgt - prints the last digit
 * @n: the number
 *
 * Return: value of the last digit
 */
int print_last_dgt(int n)
{
	int f = n % 10;


	if (f < 0)
		f *= -1;


	_putchar(f + '0');


	return (f);
}
