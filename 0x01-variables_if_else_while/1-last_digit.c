#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int o;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	o = n % 10;
	if (o > 5)
		printf("Last digit of %d, which is %d, is greater than 5\n", n, o);
	else if (o == 0)
		printf("Last digit of %d, which is %d and equal to 0\n", n, o);
	else if (0 < 6 && o != 0)
		printf("Last digit of %d, is %d, & less than 6 and is to 0\n", n, o);
	return (0);
}
