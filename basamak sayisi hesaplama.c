#include <stdio.h>
#include <conio.h>
#include <math.h>

/*kullan�c�n�n rastgele �retti�i pozitif say�n�n max 5 basamakl� kac basamakl� oldugunu bulunuz

*/
int main(void)
{
    int sayi;
    int basamak = 0;
   
    printf("lutfen basamak sayisini ogrenmek istediginiz sayiyi giriniz : "); 
    scanf_s("%d", &sayi);
 
    if (sayi < 10) {
        printf("basamak sayisi=1");

    }
    else if (sayi < 100) {
        printf("basamak sayisi=2");

    }
    else if (sayi < 1000) {
        printf("basamak sayisi=3");
    }
    else if (sayi < 10000) {
        printf("basamak sayisi=4");

    }
    else if (sayi < 100000) {
        printf("basamak sayisi=5");
    }
    else {
        printf("yanlis karakter girdiniz");
    }
    



    
    return 0;
}
