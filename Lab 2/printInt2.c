#include <stdio.h>
int a = 10;
void printValue() { printf("a=%d\n", a); }
int main()
{
    a = 11;
    printValue();
}