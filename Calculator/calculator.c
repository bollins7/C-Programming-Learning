#include <cs50.h>
#include <stdio.h>

// int = whole numbers but can run out of room.
// long = more numbers
// float can output decimals

int main(void)
{
    long x = get_long("X: ");
    long y = get_long("Y: ");

    float z = (float) x / (float) y;

    printf("%.20f\n", z);
}