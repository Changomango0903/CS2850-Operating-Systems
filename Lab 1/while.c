#include <stdio.h>
#define N 10
int main()
{
    int i;
    int sum = 0;
    while (i < N)
    {
        if (i % 2)
        {
            sum = sum + i;
            printf("%d + ", i);
        }
        i++;
    }
    sum = sum + i;
    printf("%d = %d\n", i, sum);
}