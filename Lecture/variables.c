#include <cs50.h>
#include <stdio.h>

// This type of code names entire functions and call those back to the main function. Makes a 40 lines into 2 because of the
// functions found below. Just makes it more readable.
// Just remember to put the functions at the top of code before main function to call to the functions you created at the bottom

int get_size(void);
void print_grid(int size);

int main(void)
{
    int n = get_size();

    print_grid(n);
}




int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    return n;
}

void print_grid(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}