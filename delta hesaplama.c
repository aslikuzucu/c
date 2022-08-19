#include <stdio.h>
#include <conio.h>
#include <math.h>


int main(void)
{
    float a, b, c, d ;

    printf("a degerini giriniz :"); scanf_s("%f", &a);
    printf("b degerini giriniz :"); scanf_s("%f", &b);
    printf("c degerini giriniz :"); scanf_s("%f", &c);
    
    d = pow(b, 2) - 4*(a * c);
    
    

    if (d <= 0)
        printf("reel kok yok");
    if (d == 0)
        printf("cift kok var");
    if (d >= 0)
        printf("birden fazla kok var");



    return 0;
}
