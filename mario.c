#include <stdio.h>
#include <cs50.h>
/**
 * This program asks the user for input, specifying the height of the pyramid.
 * Then it prints two half-pyramids in hashes with two spaces in between, with the bottom of the left pyramid aligned
 * at the left and the bottom of the right pyramid aligned at the right
 * It does this by first printing an amount of spaces that is equal to the height, minus the number of line it's on, with the top
 * line counted as 1, the one below it as 2, etc.
 * Then it prints an amount of hashes that is equal to (height + 1 - (amount of spaces on that line))
 * Then it prints the same amount of hashes
 * Then it starts a new line
 */

int main(void)
{
    //Ask user for input
    int height;
    do
    {
        printf("Height: ");
        height = GetInt();
    }
    while (height < 0 || height > 23);

    //print right amount of spaces and hashes, then start new line
    int i;
    for (i = 1; i <= height; i++)
    {
        //print (height - i) spaces
        int spaces;
        for (spaces = 0; spaces < (height - i); spaces++)
        {
            printf(" ");
        }
        //print ((height + 1) - spaces) hashes
        int hashes;
        for (hashes = 0; hashes < i; hashes++)
        {
            printf("#");
        }
        //print two spaces
        printf("  ");

        //print same amount of hashes as before
        for (hashes = 0; hashes < i; hashes++)
        {
            printf("#");
        }

        //start new line
        printf("\n");
    }
}
