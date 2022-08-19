#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

/* iki tane matris olusturup bu iki matrisi carparak yeni bir matris olusturma


*/
int main(void)
{
    int birinciMatris[5][5], ikinciMatris[5][5], i, j, carpimMatris[5][5];
    srand(time(NULL));
    printf("birinci matris\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            birinciMatris[i][j] = rand() % 10;
         
            printf("%d\t", birinciMatris[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("ikinci matris\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            
            ikinciMatris[i][j] = rand() % 10;
            printf("%d\t", ikinciMatris[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("carpim matris\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
          
            carpimMatris[i][j] = birinciMatris[i][j] * ikinciMatris[i][j];
            printf("%d\t", carpimMatris[i][j]);
        }
        printf("\n");
    }
        return 0;
    }

