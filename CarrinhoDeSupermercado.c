#include <stdio.h>
#include <windows.h>
#include <string.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);

    printf("CARRINHO DE SUPERMERCADO\n");

    char nomeProduto[30] = "";
    float preço = 0.00f;
    int quantidade = 0;
    float valorTotal = 0;

    printf("\nQual item você gostaria de comprar?: ");
    fgets(nomeProduto, sizeof(nomeProduto), stdin);
    nomeProduto[strlen(nomeProduto) - 1] = '\0';

    printf("Qual o preço do produto?: ");
    scanf("%f", &preço);

    printf("Quantos você gostaria de comprar?: ");
    scanf("%d", &quantidade);

    valorTotal = preço * quantidade;

    printf("\nVocê comprou %d %s(s)", quantidade, nomeProduto);
    printf("\nO total é: R$%.2f", valorTotal);

    return 0;
}