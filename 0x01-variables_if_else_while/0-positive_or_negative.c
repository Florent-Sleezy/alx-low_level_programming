#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this is the main function
 *
 *Description: print value of n satus; zero, positive or negative
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*My code starts here*/
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);

	return (0);
}
