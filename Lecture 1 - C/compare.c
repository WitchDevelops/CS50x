#include <cs50.h> // for get_int function
#include <stdio.h> // for printf function

int main(void)
{
    // have to declare the type
    int x = get_int("Give x: ");
    int y = get_int("Give y: ");

    if (x > y)
    {
        printf("x is greater than y\n");
    }
    else if (x < y)
    {
        printf("x is smaller than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
}