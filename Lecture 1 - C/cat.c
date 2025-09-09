#include <cs50.h>
#include <stdio.h>

//this is meow function prototype
void meow(int number);

int main(void)
{
    meow(3);
}

void meow(int number)
{   
    for (int i = 0; i < 3; i++)
    {
        printf("meow\n");
    }
}