#include <stdio.h>

int main() {
    int a = 47;
    int b = 145;
    printf(" value of a=%d b=%d before swapping", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("value of i=%d k=%d after swapping", a, b);

    return 0;
}
