/*************************************/
    /* Name: Oomat Latipov */
    /* NetID: U13921223 */
    /* Program Description: This program */
    /* uses brute-force computing */
    /* to calculate employee weekly pay */
/*************************************/

#include <stdio.h>
int main()
{
    // Declaring variables for later use.
    float hours;
    float pay_rate;
    float extra_hours;
    float gross;
    float extra_gross;
    float rest_gross;
    float tax;
    float net;

    // The beggining of the function with the use of infinite while cycle.
    while (1){

        // Functions for user input and functions for statements for ending the cycle.
        printf("Enter the number of hours worked in the week (enter 0 to stop): ");
        scanf("%f", &hours);
        if (hours == 0) break;
        // Re-executing the cycle if the input is wrong.
        else if (hours < 0) {
            printf("Invalid number \n");
            continue;
        }
        printf("Enter the pay rate (per hour, enter 0 to stop): ");
        scanf("%f", &pay_rate);
        if (pay_rate == 0) break;
        // Re-executing the cycle if the input is wrong.
        else if (pay_rate < 0) {
            printf("Invalid number \n");
            continue;
        }

        // Additional calculations if the work hours exceed 40.
        if (hours > 40) {
            extra_hours = hours - 40;
            gross = (40 * pay_rate) + (extra_hours * (pay_rate * 1.5));
            printf("Weekly pay (Gross): $%.2f \n", gross);
        } 
        // Regular calculations if the work hours do not exceed 40.
        else {
            gross = (hours * pay_rate);
            printf("Weekly pay (Gross): $%.2f \n", gross);
        }

        // Calculations of gross income when it does not exceed 300.
        if (gross < 300) {
            tax = (gross * 10) / 100;
            printf("Tax: $%.2f \n", tax);
        } 
        // Calculations of gross income when it does not exceed 450.
        // So I could calculate first $300 and then the rest of it.
        else if(gross < 450) {
            extra_gross = gross - 300;
            tax = 30 + ((extra_gross * 15) / 100);
            printf("Tax: $%.2f \n", tax);
        } 
        // Calculations of gross income when it exceeds 450.
        else {
            extra_gross = gross - 300;
            rest_gross = gross - 450;
            tax = 30 + 22.5 + ((rest_gross * 20) / 100);
            printf("Tax: $%.2f \n", tax);
        }

        // Calculations of net worth.
        net = gross - tax;
        printf("Weekly pay (Net): $%.2f \n", net);
    }
    return 0;
}
