#include <cs50.h>
#include <stdio.h>

// Getting strings
int main(void)
{
    string answer = get_string("What is your name? ");
    printf("hello, %s!\n", answer);
}