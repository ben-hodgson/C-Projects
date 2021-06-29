#include <stdio.h>

void main (void)
{
    int a;
    int b = 3;
    int c;

    a = 2;
    c = a + b;
    printf ("The sum of adding %d and %d is %d\n", a, b, c);
    printf ("but its is not when you swap %d and %d around\n", c, a);
}