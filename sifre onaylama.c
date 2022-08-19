#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/*  kullanýcýdan þifre alýncak
    büyük küçük harf olacak
   sayý olacak
  en az 8 en fazla 16 karaakter olacak
   

*/
int main(void)
{
    int kucukharf=0, buyukharf=0, sayi=0, karaktersayisi=0;
    char ch;

    printf("lutfen olusturmak istediginiz sifreyi giriniz : ");
    

    do {
        ch = getchar();
        if (kucukharf==0) {
            if (islower(ch)) {
                kucukharf = 1;
            }
        }
        if (buyukharf == 0) {
            if (isupper(ch)) {
                buyukharf = 1;

            }
        }
        if (sayi == 0) {
            if (isdigit(ch)) {
                sayi = 1;
            }
        }

        karaktersayisi++;

    } while (ch != '\n');
    if (kucukharf && buyukharf && sayi && karaktersayisi >= 8 && karaktersayisi <= 16) {
        printf("sifreniz kabul edildi");
    }

    else {
        printf("sifreniz kabul edilmedi");
    }


    return 0;
}
