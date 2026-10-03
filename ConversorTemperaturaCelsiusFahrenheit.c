#include <stdio.h>
#include <windows.h>
#include <string.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);

    printf("CONVERSOR DE TEMPERATURA C e F\n");

    char escolha = '\0';
    float temperaturaCelsius = 0.00f;
    float temperaturaFahrenheit = 0.00f;

    printf("\nC - Celsius para Fahrenheit");
    printf("\nF - Fahrenheit para Celsius\n");

    printf("\nA temperatura está em Celsius (C) ou em Fahrenheito (F)?: ");
    scanf("%c", &escolha);

    if(escolha == 'C'){
        printf("Insira a temperatura em Celsius: ");
        scanf("%f", &temperaturaCelsius);
        temperaturaFahrenheit = (temperaturaCelsius * 9.0/5.0) + 32;
        printf("\nA temperatura em Fahrenheit é: %2.f", temperaturaFahrenheit);
    }
    else if(escolha == 'F'){
        printf("Insira a temperatura em Celsius: ");
        scanf("%f", &temperaturaFahrenheit);
        temperaturaCelsius = (temperaturaFahrenheit - 32) * 5.0/9.0;
        printf("\nA temperatura em Celsius é: %2.f", temperaturaCelsius);
    }
    else{
        printf("====OPCAO INVALIDA====");
    }

    return 0;
}