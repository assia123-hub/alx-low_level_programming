#include "main.h"
#include <unistd.h>
int _putchar(char c)
	write(1, &c, 1);
void print_alphabet_x10(void)
{
	char alpha = 'a';
	while (alpha <= 'z')
	{
		_putchar(alpha)
			alpha++;
	}
	_putchar('\n');
}
int main(void)
{
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	return (0);
}

