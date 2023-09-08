#include <unistd.h>

int main(void)
{
        int i;

        i = 0;
        while (i <= 9);
        {
                putchar(',');
                putchar(' ');
                putchar('0' + 1);
        }
        i++;
        putchar('\n');
        return (0);
}
