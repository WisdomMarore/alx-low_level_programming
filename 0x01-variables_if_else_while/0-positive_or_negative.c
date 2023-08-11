#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main Entry point
 *
 * Return Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d", n);
	if (n > 0) {
		printf(n ,"is positive/n");
	} else if (n < 0) {
		printf(n, "is negative/n");
	} else {
		printf(n, "is 0");
	}

	return (0);

