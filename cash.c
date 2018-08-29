#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //Ask user for input, store in variable 'change'.
    float input;

    do
    {
        input = get_float("Change owed: ");
    }
    while (input < 0);

    //For precision: convert the float which was given in dollars into an int given in cents. Round off because of floating-point imprecision.
    int change = round(input * 100);

    //Look for largest possible coin. If there is one, subtract that amount from 'change' and add 1 to numcoins. If change == 0, continue to giving output.
    int numcoins;
    for (numcoins = 0; change > 0; numcoins++)
    {
        if (change >= 25)
        {
            change -= 25;
        }

        else if (change >= 10)
        {
            change -= 10;
        }

        else if (change >= 5)
        {
            change -= 5;
        }

        else //(change >= 1)
        {
            change -= 1;
        }
    }

    //output answer
    printf("%d\n", numcoins);
}