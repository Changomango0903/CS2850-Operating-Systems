#include <stdio.h>
int upper(int c) {
    if (c >= 'a' && c <= 'z') {
        return c + 'A' - 'a';
    }
    return c;
}
int lower(int c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 'a' - 'A';
    }
    return c;
}

int main() {
    int d;
    while ((d = getchar()) != -1) {
        putchar(lower(d));
    }
}
