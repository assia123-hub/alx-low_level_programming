#include <stdio.h>
#include <time.h>
 /**
 *main - if the last digit of n is greater than 5: the string and is greater than 5
 *       if the last digit of n is 0: the string and is 0
 *      if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

        if (n > 5)
        {
                printf("and is greater than 5\n");
        }
        if (n == 0)
        {
                printf("and is 0\n");
        }
        if (n < 6)
        {
                printf("and is less than 6 and not 0");
        }
        return (0);
}
