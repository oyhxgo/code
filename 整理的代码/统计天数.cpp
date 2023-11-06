#include <stdio.h>
long b[10000010];
int main()
{
    long max = 0, x = 0, k = 0;
    long a;
    scanf("%ld", &a);
    for (long i = 1; i <= a; i++)
    {
        scanf("%ld", &b[i]);
        if (b[i] >= max)
        {
            max = b[i];
            k++;
        }
        if (b[i] < max)
        {
            if (k > x)
            {
                x = k;
            }
            k = 1;
            max = b[i];
        }
    }
    printf("%ld", x);
    return 0;
}