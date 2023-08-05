#include <stdio.h>
#include <cs50.h>

// Creating game blocks

int main(void)
{
    // Get size of grid
    int m;
    do
    {
        m = get_int("Size: ");
    }
    while (m < 1);

    // Prints grid of bricks
    for (int i = 0; i < 4; i++)
    {
        printf("?");
    }
        printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("#\n");
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("#");
        }
            printf("\n");
    }
}