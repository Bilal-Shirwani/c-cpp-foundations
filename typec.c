#include <stdio.h>

int main(void) {
    int age = 26;
    float y = 3.14;
    double z = 3.14;
    char c = 'A';

    printf("My age is: %d\n", age);
    printf("Float value is: %f\n", y);
    printf("Double value is: %lf\n", z);
    printf("Character is: %c\n", c);

    printf("Size of age variable: %zu bytes\n", sizeof(age));
    printf("Size of float variable: %zu bytes\n", sizeof(y));
    printf("Size of double variable: %zu bytes\n", sizeof(z));
    printf("Size of char variable: %zu bytes\n", sizeof(c));

    printf("Character as a number: %d\n", c);

    printf("float with 20 decimals:  %.20f\n", y);
    printf("double with 20 decimals: %.20f\n", z);

    printf("float 0.1:  %.20f\n", 0.1f);
    printf("double 0.1: %.20f\n", 0.1);

    return 0;
}