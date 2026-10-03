#include <stdio.h>
#include <windows.h>

void verSaldo(float saldo);
float depositar();
float sacar(float saldo);

int main(){
    SetConsoleOutputCP(CP_UTF8);
    
    int opcao = 0;
    float saldo = 0.00f;

    printf("SIMULADOR DE BANCO\n");

    /*
    1 - ver saldo
    2 - depositar
    3 - sacar
    4 - sair
    */

    do{
        printf("\nMENU DE OPÇÕES\n1 - Ver Saldo\n2 - Depositar\n3 - Sacar\n4 - Sair");
        printf("\nDigite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            verSaldo(saldo);
            break;
        case 2:
            saldo += depositar();
            break;
        case 3:
            saldo -= sacar(saldo);
            break;
        case 4:
            printf("\nSaindo . . .");
            break;
        default:
            printf("\n==== OPCAO INVALIDA ====\n");
        }


    }while(opcao != 4);

    return 0;
}

void verSaldo(float saldo){

    printf("\n -> Seu saldo atual é: R$%2.f\n", saldo);

}
float depositar(){
    float valorDeposito = 0.00f;

    printf("\nInsira o valor que deseja depositar: ");
    scanf("%f", &valorDeposito);

    if(valorDeposito < 0){
        printf("\n=== VALOR INVALIDO ===\n");
        return 0.00f;
    }
    else{
        printf("\n -> Voce depositou R$%.2f\n", valorDeposito);
        return valorDeposito;
    }
    
}
float sacar(float saldo){

    float valorSaque = 0.00f;

    printf("\nInsira o valor que deseja sacar: ");
    scanf("%f", &valorSaque);

   if(valorSaque < 0 || valorSaque > saldo){
    printf("\n=== VALOR INVALIDO ===\n");
    return 0.00f;
   }
   else{
    printf("\n -> Voce sacou R$%.2f\n", valorSaque);
    return valorSaque;
   }
}
