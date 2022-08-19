#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/* kullanicidan bir sayi alip asal olup olmadigini sorgulama


*/
int main(void)
{
    int altsorgu,ustsorgu, i,j, sayac;

    printf("asal olup olmadigini kontrol etmek istediginiz alt sorgu ve ust sorguyu giriniz : \n");
    scanf_s("%d %d", &altsorgu, &ustsorgu);

    for (i = altsorgu; i <= ustsorgu; i++) {
        sayac = 0;
      
        for (j = 2; j < i; j++){
            
            if (i % j == 0) {
                sayac = 1;
                break;
                
            }
       }
        if (!sayac) {
            printf("%d", i);
        }
    }



        return 0;
    }

