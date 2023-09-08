#include <stdio.h>
 /**
 * main - if the number is greater than 0: is positive
 *        if the number is 0: is zero
 *        if the number is less than 0: is negative
 */
int main(void)
{
        int n;
        srand(time(0));
        n = rand() - RAND_MAX / 2;

        if (n > 0)
        {
                printf("is positive\n");
        }
        if (n == 0)
        {
                printf("is zero\n");
        }
        if (n < 0)
        {
                printf("is negative\n");
        }
        return (0);
}
