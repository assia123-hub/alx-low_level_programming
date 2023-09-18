#include "main.h"
#include <stdio.h>

/**
 * main - swaps the values of two integers
 *
 * return: always 0.
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
