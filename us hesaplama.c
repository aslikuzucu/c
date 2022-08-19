#include <stdio.h>
#include <conio.h>
#include <math.h>

/*

*/
int main(void)
{
    int i, j;
    for (i = 2; i < 10; i++) {

        for (j = 1; j < 10; j++) {
            int sonuc = pow(i, j);
            printf("%d ", sonuc);

        }
        printf("\n");
    }

    return 0;
}
