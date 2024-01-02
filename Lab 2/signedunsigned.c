#include <stdio.h>
int main()
{
    int a = 127;
    char c;
    c = a;
    a = c;
    printf("a=%d\n", a);
}