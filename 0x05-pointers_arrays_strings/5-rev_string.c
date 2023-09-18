#include "main.h"
#include <stdio.h>

/**
  * rev_string - reverse a string.
  * @s: string to reverse
  */
void rev_string(char *s)
{
	int j, temp;
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	i--;
	j = 0;
	while (i > j)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j++;
		i--;
	}

}


