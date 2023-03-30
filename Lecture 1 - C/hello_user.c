//include header files. they are libraries with functions. No inbuild functions in C
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string answer = get_string("What is your name? ");
    printf("Hello, %s!\n", answer);
}