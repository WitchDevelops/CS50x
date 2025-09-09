#include <cs50.h>
#include <stdio.h>

//this is meow function prototype
int get_n(void);
void meow(int number);

int main(void)
{   
    int n = get_n();
    meow(n);
}

int get_n(void)
{
    int n;
    do
    {
        n = get_int("How many times the cat should meow? \n");
    }
    while (n <= 0);
}

void meow(int number)
{   
    for (int i = 0; i < number; i++)
    {
        printf("meow\n");
    }
}