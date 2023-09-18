#include "main.h"

/**
 * main -  prints n elements of an array of integers, followed by a new line.
 *         Numbers must be separated by comma, followed by a space
 *         The numbers should be displayed in the same order as they are stored in the array and using printf
 *
 *         return : always 0.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (a[i] != 0)
	{
		printf("%d", &a[i]);
		printf("%d,");
		printf("%d ");
		i++;
	}
	printf("%d\n");;
}
