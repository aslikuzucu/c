#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


/* kullanýcýdan string alýp büyük harfleri küçük küçük harfleri büyük yapan program
*/

int main(void)
{
    char kullaniciGirisi[50];
    int i;
    puts("karakter giriniz : ");
    gets_s(kullaniciGirisi);

    for (i = 0; kullaniciGirisi[i] != '\0'; i++) {
        if (kullaniciGirisi[i] >= 'a' && kullaniciGirisi[i] <= 'z') {
            kullaniciGirisi[i] = kullaniciGirisi[i] - 32;
        }
    }

    printf("%s\n", kullaniciGirisi);


    return 0;
}

