#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	j = 0;
	while (s[len - 1])
	{
		_putchar(s[j]);
		j--;
	}

	_putchar('\n');
}
