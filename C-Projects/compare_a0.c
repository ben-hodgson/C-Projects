#include <stdio.h>

void main (void)
{
    int a = 0;
    int b = 0;

    if (a == 0 && b == 0)
    {
        printf ("a and b are equal to 0\n");
    }
    else if (a == 0 || b == 0)
    {
        printf ("one of a or b are equal to 0\n a is %d\n b is %d\n", a, b);
    }

    else
    {
        printf ("neither a or b are equal to 0\n a is %d\n b is %d\n", a, b);
    }
}