#include <stdio.h>
#include <conio.h>
#include <math.h>

/*kullanc��dan yar�cap al�p dairenin alan�n� ve cevvresini hesaplay�n�z
daire alan= pi*r^2
daire cevre= 2*pi*r

*/
int main(void)
{
    float r, alan, cevre, pi;
    pi = 3.14;
 
    printf("yaricap giriniz: \n\n"); scanf_s("%f", &r);
    alan = pi * r * r;
    cevre = 2 * pi * r;
    printf("alan: %f \n\n", alan);
    printf("cevre: %f ", cevre);

    
    return 0;
}
