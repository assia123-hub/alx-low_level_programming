#include <stdio.h>
#include <time.h>

 /**
 * main - if the number is greater than 0: is positive
 *        if the number is 0: is zero
 *        if the number is less than 0: is negative
 *
 *        return:0
 */
int main(void)
{
        int n;
        srand(time(0));
        n = rand() - RAND_MAX / 2;

        if (n > 0)
        {
                printf("is positive\n", n);
        }
	else if (n == 0)
        {
                printf("is zero\n", n);
        }
	else (n < 0)
        {
                printf("is negative\n", n);
        }
        return (0);
}
