#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);

    printf("CALCULADORA\n");

    float n1 = 0.00f;
    float n2 = 0.00f;
    float resultado = 0.00f;

    char operacao = '\0';

    printf("\nInsira o primeiro valor: ");
    scanf("%f", &n1);

    printf("\nEscolha a operação (+ - * /): ");
    scanf(" %c", &operacao);

    printf("\nInsira o segundo valor: ");
    scanf("%f", &n2);

    switch (operacao)
    {
    case '+':
        resultado = n1 + n2;
        printf("%f + %f = %f", n1, n2, resultado);
        break;
    case '-':
        resultado = n1 - n2;
        printf("%f - %f = %f", n1, n2, resultado);
        break;
    case '*':
        resultado = n1 * n2;
        printf("%f * %f = %f", n1, n2, resultado);
        break;
    case '/':
        if(n2 != 0){
            resultado = n1 / n2;
            printf("%f / %f = %f", n1, n2, resultado);
            break;
        }
        else{
            printf("\n====NAO PODE DIVIDIR POR 0====");
        }
    default:
        printf("\n====OPERACAO INVALIDA====");
        break;
    }

    return 0;
}