#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What is your name? \n");
    int age = get_int("Age: \n");
    long phone = get_long("Enter phone number: \n");

    printf("Name: %s\n", name);
    printf("Age: %i\n", age);
    printf("Phone info: %li\n", phone);
}