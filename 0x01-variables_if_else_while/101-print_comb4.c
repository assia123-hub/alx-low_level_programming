#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible different combinations of 3 digits.
 * Numbers must be separated by commas and a space.
 * The 3 digits must be different.
 * 012, 120, 102, 021, 201, 210 are considered the same combination.
 * print only the smallest combination of 3 digits.
 * Numbers should be printed in ascending order.
 * You can only use `putchar` to print to console.
 * You can only use `putchar` up to 6 times.
 * You are not allowed to use any variables of type `char`.
 * Return: 0
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
