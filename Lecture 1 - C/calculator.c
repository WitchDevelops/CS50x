#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("Define x ");
    int y = get_int("Define y ");

    printf("%i\n", x + y);
}