#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Return:0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
		printf("Last digit of %i is greaters than 5\n", last);
	else if (last == 0)
		printf("Last digit of %i is zero\n", last);
	else if (last < 6 && last != 0)
		printf("Last digit of %i is less than 6 and not 0\n", last);
	return (0);
}
