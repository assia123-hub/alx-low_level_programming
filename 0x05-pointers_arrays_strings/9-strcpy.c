#include "main.h"
#include <stdio.h>

/**
 * main - copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
 *        Return value: the pointer to dest
 *
 * return: always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	dest[i] = src[i]
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	dest = '\0';
	return (dest);
}
