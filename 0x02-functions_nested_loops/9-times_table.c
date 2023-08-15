#include <stdio.h>

/**
 * The function - it prints the 9 times table
 *
 * Retuen: void
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d, ", i * 9);
	}
	printf("\n");
}
