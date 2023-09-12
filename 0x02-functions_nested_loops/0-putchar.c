#include <unistd.h>
#include "main.h"

/**
 *  main - prints _putchar, followed by a new line
 *
 *  return: always 0
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
