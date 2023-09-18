#include "main.h"
#include <stdio.h>

/**
 * main - The number in the string can be preceded by an infinite number of characters
 * @You need to take into account all the - and + signs before the number
 * @If there are no numbers in the string, the function must return 0
 * @You are not allowed to use long
 * @You are not allowed to declare new variables of “type” array
 * @You are not allowed to hard-code special values
 * @We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.
 *
 * return: always 0.
 */
int _atoi(char *s)
{
	int _atoi(char *s)
{
	int i, sign, numb;

	i = 0;
	sign = 1;
	numb = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				numb = (s[i] - '0') * sign + numb * 10;
				i++;
			}
			break;
		}
		i++;
	}
	return (numb);
}
