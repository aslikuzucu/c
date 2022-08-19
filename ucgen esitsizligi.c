#include <stdio.h>
#include <conio.h>
#include <math.h>

/*kullanýcýdan kenar al ucgen esitsigi hesapla

a + b > c  
a + c > b 
b + c > a 
 */

int main(void)
{
    int a, b, c;

    printf("a kenarini giriniz : \n");
    scanf_s("%d", &a);
    printf("b kenarini giriniz : \n");
    scanf_s("%d", &b);
    printf("c kenarini giriniz : \n");
    scanf_s("%d", &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("ucgen olusturulabilir..\n");
    }
    else {
        printf("ucgen olusturma basarisiz..");
    }
    return 0;
}
