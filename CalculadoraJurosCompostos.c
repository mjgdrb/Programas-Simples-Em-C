#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);

    printf("CALCULADORA DE JUROS COMPOSTOS\n");

    double montante = 0.0;
    double capitalInicial = 0.0;
    double taxaJuros = 0.0;
    double tempoAplicacao = 0.0;

    printf("\nInsira o capital inicial (C): ");
    scanf("%lf", &capitalInicial);

    printf("\nInsira a taxa de juros (i) em porcentagem: ");
    scanf("%lf", &taxaJuros);

    taxaJuros /= 100.0;

    printf("\nInsira o tempo de aplicacao (t): ");
    scanf("%lf", &tempoAplicacao);

    montante = capitalInicial * pow(1+taxaJuros, tempoAplicacao);

    printf("\nO montante final é: R$%2.lf", montante);

    return 0;
}