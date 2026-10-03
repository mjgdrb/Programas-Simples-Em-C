#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);

    int escolha = 0;
    double pesoQuilogramas = 0;
    double pesoLibras = 0;
    
    printf("CONVERSOR DE PESO kg e lb\n");

    printf("\n1 - Quilogramas para Libras");
    printf("\n2 - Libras para Quilograms");

    printf("\nDigite sua escolha (1 ou 2): ");
    scanf("%d", &escolha);

    if(escolha == 1){
        printf("\nInsira o peso em quilogramas (Kg): ");
        scanf("%lf", &pesoQuilogramas);
        pesoLibras = pesoQuilogramas * 2.20462;
        printf("\nPeso em Libras: %.2lflb", pesoLibras);
    }
    else if(escolha == 2){
        printf("\nInsira o peso em libras (lb): ");
        scanf("%lf", &pesoLibras);
        pesoQuilogramas = pesoLibras / 2.20462;
        printf("\nPeso em Quilogramas: %.2lfkg", pesoQuilogramas);
    }
    else{
        printf("\n====ESCOLHA INVALIDA!====");
    }

    
    return 0;
}