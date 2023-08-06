#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Prompting the user for a starting number of llamas
    int start;
    do
    {
        start = get_int("Start size: ");
    } 
    while (start < 9);
    //Prompting the user for an end number of llamas
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);
    
    //How many years to get to the goal?
    int years = 0;
    while (start < end)
    {
        start += start / 12;
        years++;
    }
    printf("Years: %i\n", years);
}