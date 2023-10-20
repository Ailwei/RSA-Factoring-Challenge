#include <stdio.h>

int main(void)
{
    long long num = 239809320265259;
    long factor1 = 2;
    long factor2;

    while (num % factor1)
    {
        if (factor1 <= num)
            factor1++;
        else
            return (-1);
    }

    factor2 = num / factor1;
    printf("%lld = %ld * %ld\n", num, factor1, factor2);
    return (0);
}

