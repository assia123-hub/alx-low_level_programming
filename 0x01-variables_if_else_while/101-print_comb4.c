#include <stdio.h>
/**
 * main - print numbers from 00 to 99.
 *
 * return always 0
 */
int main(void)
{
	int i = '0';
	int j = '0';
	int a = '0';

	while (i <= '7')
	{
		while (j <= '8')
		{
			while (a <= '9')
			{
				if (i < j && j < a)
				{
					putchar(i);
					putchar(j);
					putchar(a);
					if (!(i == '7' && j == '8' && a == '9'))
					{
						putchar(',');
						putchar(' ');
					}

				}
				k++;
			}
			a = '0';
			j++;
		}
		j = '0';
		i++;
	}
	putchar('\n');
	return (0);
}
