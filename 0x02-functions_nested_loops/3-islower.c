#include<unistd.h>
#include "main.h"

int _putchar(char c)
{
	write(1, &c, 1);
}

int _islower(int c)
{
	int i = '97';
	while (i <= '122')
	{
		if (i <= '122')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}

