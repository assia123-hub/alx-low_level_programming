#include "main.h"
#include <stdio.h>

/**
 * main - returns the length of a string
 *
 * return: always 0.
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
