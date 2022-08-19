#include <stdio.h>
#include <conio.h>
#include <math.h>

//kullanýcýdan vize final yüzdeleriyle birlikte al, ort hesabý yap,dersi geçiyorsa 1 geçemiyorsa 0 yazdýr//
int main(void)
{
    int vize, finall, ort, can, vyuzde, fyuzde;
    
    printf("vize notunuzu ve yuzdenizi girin : \n"); scanf_s("%d %d", &vize, &vyuzde);

    printf("final notunuzu ve yuzdeninizi girin: \n"); scanf_s("%d %d", &finall, &fyuzde);

    ort = (vize * vyuzde) / 100 + (finall * fyuzde) / 100;
    can = 48;

    if (ort >= can)
        printf("1 (gectiniz)");
    else
        printf("0 (kaldiniz)");

    return 0;
}
