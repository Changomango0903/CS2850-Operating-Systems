#include <stdio.h>
char a;
int b;
float c;
unsigned long int size_char = sizeof(a);
unsigned long int size_int = sizeof(b);
unsigned long int size_float = sizeof(c);
int main(){
    printf("%lu\n", size_char);
    printf("%lu\n", size_int);
    printf("%lu\n", size_float);
}