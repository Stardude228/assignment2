/*************************************/
    /* Name: Oomat Latipov */
    /* NetID: U13921223 */
    /* Program Description: This program */
    /* asks the user to enter a fraction, */
    /* then reduces the fraction to lowest terms */
/*************************************/

#include <stdio.h>
int main()
{
    // Declaring variables for later use.
    int numerator, denominator;
    int temp;

    // The beggining of the function with the use of infinite while cycle.
    while (1){

        // Functions for user input and functions for statements for ending the cycle.
        printf("Enter a fraction (enter 0 to stop): ");
        scanf("%d/%d", &numerator, &denominator);
        if (numerator == 0 || denominator == 0) break;

        // Finding the greater value for the further cycles.
        if (numerator > denominator)
            temp = numerator;
        else
            temp = denominator;

        // Going through for cycle to obtain the right numerator and denominator.
            for (int i = temp; i > 1; i--) {
                if (numerator % i == 0 && denominator % i == 0) {
                    numerator /= i;
                    denominator /= i;
                    break;
                }
            }
            printf("In lowest terms: %d/%d\n", numerator, denominator);
        }
    return 0;
}