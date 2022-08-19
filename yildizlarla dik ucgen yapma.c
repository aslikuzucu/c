#include <stdio.h>
#include <conio.h>
#include <math.h>

/*  *
*   **
*   ***
*   ****
*   *****

*/
int main(void)
{
    int i, j;
    for (i = 1; i < 15; i++) {

        for (j = 1; j<i; j++) {
        
            printf("*");

        }
        printf("\n");
    }



    return 0;
}
