#include <stdio.h>
#include <cs50.h>

int main(void)
{   
    int number;

    while (true)
    {
        number = get_int("How many times should we meow?\n");
        if (number <= 0)
        {
            printf("Number should be bigger than 0\n");
            continue;
        }
        else
        {
            break;
        }
    }
    

    for (int i = 0; i < number; i++)
    {   
        printf("meow ");
    }
    printf("\n");
}