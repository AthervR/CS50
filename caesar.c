#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{

    // Verify if the input has the right amount of components
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Create key value and verify its value is valid

    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int key = atoi(argv[1]);

    // Get the plain text
    string text = (get_string("Plaintext: "));

    // Print cypher text line before the for command to avoid looping
    printf("ciphertext: ");

    for (int i = 0; i < strlen(text); i++)
    {
        char c = text[i];

        // Checking for uppercase letters
        if (isupper(c))
        {
            c = (((c - 'A' + key) % 26) + 'A');
        }

        // Checking for lowercase letters
        else if (islower(c))
        {
            c = (((c - 'a' + key) % 26) + 'a');
        }

        printf("%c", c);
    }
    printf("\n");
}
