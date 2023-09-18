#include "main.h"
#include <stdio.h>

/**
 * main - returns the length of a string
 *
 * return : always 0.
 */
int _strlen(char *s)
{
	int *s;
	int len;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
