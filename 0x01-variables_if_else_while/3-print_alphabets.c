#include <stdio.h>
/**
 * main - princippal function
 * Description: Print the alphabet in lowercase and uppercase on same line
 * using putchar only thrice
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
