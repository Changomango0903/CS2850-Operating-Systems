#include <stdio.h>
int readLine(char *s, int MAX) {
    char c;
    int i = 0;
    while((c = getchar()) != '\n') {
        if(i >= MAX) {
            printf("input too long!\n");
            return -1;
        }
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}

int convertBlock(char *s, int *pos, int lenBlock) {
    int n = 0, i = 0;
    while (i < lenBlock) {
        char c = s[*pos + i];
        if((c - '0') <= 9 && (c - '0') >= 0) {
            n = n * 10 + (c - '0');
        }
        i++;
    }
    *pos = *pos + lenBlock + 1;
    return n;
}

int getBlock(char *s, int *pos, int lenInput) {
    int start = *pos;
    while (s[*pos] != ' ' && *pos < lenInput) {
        *pos = *pos + 1;
    }
    int len = *pos - start;
    *pos = start;
    return len;
}

void printVector(int *a, int len) {
    for (int k = 0; k < len; k++) {
        printf("a[%d] = %d\n", k, *(a + k));
    }
}

long computeNorm(int *a, int len) {
    long norm = 0;
    for (int n = 0; n < len; n++) {
        norm = norm + *(a + n) * *(a + n);
    }
    return norm;
}

int main() {
    int N = 4, MAX = 10;
    char s[MAX];
    int a[N];
    printf("enter nonnegative integers:\n");
    int lenInput = readLine(s, MAX);
    if (lenInput < 0) return -1;
    printf("input: %s\n", s);
    int pos = 0, lenBlock = MAX, j = 0;
    while(pos < lenInput) {
        lenBlock = getBlock(s, &pos, lenInput);
        if(j >= N) {
            printf("too many entries!\n");
            return 0;
        }
        a[j] = convertBlock(s, &pos, lenBlock);
        j++;
    }
    long norm = computeNorm(a, j);
    printVector(a, j);
    printf("<a, a> = %ld\n", norm);
    return 0;
}
