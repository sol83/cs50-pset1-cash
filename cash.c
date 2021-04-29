#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

{
    // Declare variable here to be used globally:
    float change;

    // Do-while loop to prompt for positive int or float:
    do
    {
        change = get_float("Change owed: ");
    }
    while (change < 0);

    // Round the input to cents:
    int cents = round(change * 100);

    // Amount of coins, starting at 0
    int coins = 0;

    // Start 4 loops for each coin denomination:
    while (cents >= 25)
    {
        cents -= 25;
        coins++;
    }

    while (cents >= 10)
    {
        cents -= 10;
        coins++;
    }

    while (cents >= 5)
    {
        cents -= 5;
        coins++;
    }

    while (cents >= 1)
    {
        cents -= 1;
        coins++;
    }

    // Print the least amount of coins needed to make change:
    printf("%i\n", coins);
}