#include "main.h"

/**
 * main - print the second half of the string
 *        print the last n characters of the string,
 *
 * return :always 0.
 */
void puts_half(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i \ 2)
	{
		_putchar(&str[i])
			i--;
	}
	_putchar('\n');
}
