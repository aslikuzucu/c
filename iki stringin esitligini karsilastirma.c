#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


/* kullanýcýdan iki string alýp ikinci stringin birinci stringte geçip geçmedigini bulun
*/

int main(void)
{
    char ilkStr[50];
    char ikinciStr[50];
 

    puts("ilk stringi giriniz");
    gets_s(ilkStr);
    puts("ikinci stringi giriniz");
    gets_s(ikinciStr);

    int i = strcmp(ilkStr, ikinciStr);

    if (i == 0)
        printf("iki string esit");
    else
        printf("iki string esit degil");
    printf("\nkarsilastirma fonksiyonundan donen deger : %d", i);


    return 0;
}
