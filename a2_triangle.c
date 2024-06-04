/*************************************/
    /* Name: Oomat Latipov */
    /* NetID: U13921223 */
    /* Program Description: This program */
    /* uses brute-force computing to determine */
    /* the integer sets of Pythagorean triples */
    /* up to a limit set by the user. */
/*************************************/

#include <stdio.h>
int main()
{
    // Declaring variables for later use.
    int hyp_len;
    int a;
    int b;
    int c;

    // The beggining of the function with the use of cycle do/while.
    while (1){

        // Functions for user input.
        printf("Enter a length of hypothenuse (enter 0 to stop): ");
        scanf("%d", &hyp_len);
        if (hyp_len == 0) break;

        // Functions for user warning (User can't input integers lower than 4).
        if (hyp_len <= 4)
            printf("Enter an integer larger than 4. \n");

        // Multiple layers of cycles in order of obtaining right integers.
        for(c = 1; c <= hyp_len; c++){
            for(b = 1; b < hyp_len; b++){
                for(a = 1; a < hyp_len; a++){
                // Actual calculations of the right integers.
                if ((a*a) + (b*b) == c*c)
                    printf("a=%d, b=%d, c=%d \n", a, b, c);
                }
            }
        }
    // Closing the program if the input equals 0.
    }
    return 0;
}
