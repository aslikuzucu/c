#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

/* kullanýcýnýn girdiði stringi tersine cevirme
*/

int main(void)
{
    char kullanicigirisi[20];
    int karaktersayisi,i;
    char gecicikarakter;

    puts("lutfen terse cevirmek istediginiz stringi girin");
    gets_s(kullanicigirisi);
    karaktersayisi = strlen(kullanicigirisi);
    for (i = 0; i < karaktersayisi /2; i++) {
        gecicikarakter = kullanicigirisi[i];
        kullanicigirisi[i] = kullanicigirisi[karaktersayisi - i - 1];
        kullanicigirisi[karaktersayisi - i - 1] = gecicikarakter;


    }

    puts("tersi: ");
    puts(kullanicigirisi);

    y
    
        return 0;
    }
