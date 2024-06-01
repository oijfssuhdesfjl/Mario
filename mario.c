#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    // Prompt the user for height until a valid input is provided
    do
    {
        height = get_int("Height: ");
    } while (height < 1 || height > 8);

    // printing the rows
    for (int row = 0; row < height; row++)
    {
        // print the spaces
        int num_hashes = row + 1;
        int num_spaces = height - num_hashes;

        for (int spaces = 0; spaces < num_spaces; spaces++)
        {
            printf(" ");
        }

        // print the hashes
        for (int hashes = 0; hashes < num_hashes; hashes++)
        {
            printf("#");
        }

        // print a new line
        printf("\n");
    }

    return 0;
}
