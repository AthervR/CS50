#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    for (int a = 0; a < n; a++)
    {
        for (int d = 0; d < n - a - 1; d++)
        {
            printf(" ");
        }

        for (int b = 0; b < a + 1; b++)
        {
            printf("#");
        }
        printf("\n");
    }
}
