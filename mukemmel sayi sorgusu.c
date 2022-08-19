#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/* mukemmel sayý
* 


*/
int main(void)
{
    int mukemmelSayi, i, toplam=0;

    printf("mukemmel olup olmadigini kontrol etmek istediginiz sayiyi giriniz : ");
    scanf_s("%d", &mukemmelSayi);

    for (i = 1; i < mukemmelSayi; i++)
    {
        if (mukemmelSayi % i == 0) {
            toplam += i;
        }
}
    if (toplam == mukemmelSayi) {
        printf("girdiginiz sayi mukemmel bir sayidir");

    }
    else {
        printf("girdiginiz sayi mukemmel bir sayi degildir");
    }

        return 0;
    }

