#include <stdio.h>

int main(void)
{   
    const int n = 3;
    
    // for each row
    for (int row = 0; row < n; row++)
    {   
        // for each column
        for (int col = 0; col < n; col++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
}