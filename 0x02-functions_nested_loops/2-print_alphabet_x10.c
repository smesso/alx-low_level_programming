#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet ten times followed by a new line.
 */
void print_alphabet_x10(void)
{
    char letter = 'a';
    int count = 0;

    while (count < 10)
    {
        while (letter <= 'z')
        {
            _putchar(letter);
            letter++;
        }
        letter = 'a';  // Reset the letter to 'a' for the next iteration
        count++;
    }

    _putchar('\n');
}

