#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);

    double raio = 0.0;
    double comprimentoCircunferencia = 0.0;
    double areaCirculo = 0.0;
    double areaEsfera = 0.0;
    double volumeEsfera = 0.0;
    const double PI = 3.141459;

    printf("Insira o raio: ");
    scanf("%lf", &raio);

    comprimentoCircunferencia = 2 * PI * raio;

    printf("\nO comprimento da circunferencia é: %.2lf", comprimentoCircunferencia);

    areaCirculo = PI * pow(raio, 2);

    printf("\nA area do círculo é: %.2lf", areaCirculo);

    areaEsfera = 4 * PI * pow(raio, 2);

    printf("\nA area da esfera é: %.2lf", areaEsfera);

    volumeEsfera = (4.0 / 3.0) * PI * pow(raio, 3);

    printf("\nO volume da esfera é: %.2lf", volumeEsfera);

    return 0;
}