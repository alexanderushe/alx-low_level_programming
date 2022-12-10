/**
 * main - main block
 * Return: 0
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)

{

		int n;

			srand(time(0));

				n = rand() - RAND_MAX / 2;

					if (n > 0)
						printf("%i is a positive\n", n);
					else if (n < 0)
						printf("%i is a negative\n", n);
					else 
						printf("%i is zero\n", n);
					return (0);

}

