#include <stdio.h>

void main (void)
{
    float miles = 1.61;
    float km;

    km = miles * 1.61;

    printf ("The distance of %.2f miles in kilometers is %.2fkm\n", miles, km);
}