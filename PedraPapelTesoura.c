#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>


int pegarEscolhaPc();
int pegarEscolhaUser();
void validarVencedor(int escolhaUser, int escolhaPc);
char converter(int escolha);

int main(){
    SetConsoleOutputCP(CP_UTF8);

    printf("PEDRA PAPEL TESOURA");
    
    srand(time(NULL));

    int escolhaUser = pegarEscolhaUser();
    int escolhaPc = pegarEscolhaPc();

    switch (escolhaUser)
    {
    case 1:
        printf("Voce escolheu PEDRA");
        break;
    case 2:
        printf("Voce escolheu PAPEL");
        break;
    case 3:
        printf("Voce escolheu TESOURA");
        break;
    }

    switch (escolhaPc)
    {
    case 1:
        printf("\nComputador escolheu PEDRA");
        break;
    case 2:
        printf("\nComputador escolheu PAPEL");
        break;
    case 3:
        printf("\nComputador escolheu TESOURA");
        break;
    }

    validarVencedor(escolhaUser, escolhaPc);

    return 0;
}

int pegarEscolhaPc(){
    return (rand() % 3) + 1;
}

int pegarEscolhaUser(){

    int escolha = 0;

    do{
        printf("\n1 - Pedra \n2 - Papel \n3 - Tesoura");
        printf("\nInsira sua escolha: ");
        scanf("%d", &escolha);
    }while(escolha<1 || escolha>3);

    return escolha;
}

void validarVencedor(int escolhaUser, int escolhaPc){

    if(escolhaUser == escolhaPc){
        printf("\n=== EMPATE ===");
    }
    else if((escolhaUser == 1 && escolhaPc == 2) || 
            (escolhaUser = 2 && escolhaPc == 3) || 
            (escolhaUser == 3 && escolhaPc == 1)){

        printf("\n=== VOCE PERDEU ===");
    }
    else{
        printf("\n=== VOCE GANHOU ===");
    }
    
}