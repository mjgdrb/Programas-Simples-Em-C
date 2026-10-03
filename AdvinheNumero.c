#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>


int main(){
    SetConsoleOutputCP(CP_UTF8);

    printf("*** ADVINHE O NUMERO ***\n");
    
    srand(time(NULL));

    int min = 1;
    int max = 100;

    int randomNum = (rand() % (max-min + 1)) + min;
    
    int escolha = 1;

    int cont = 0;

    while(escolha != randomNum){
        printf("\nEscolha um numero entre %d e %d: ", min, max);
        scanf("%d", &escolha);
        cont++;
        if(escolha == randomNum){
            printf("====VOCE ACERTOU!====");
            break;
        }
        else if(escolha < 1 || escolha > 100){
            printf("\n====NUMERO INVALIDO====");
        }
        else if(escolha < randomNum){
            printf("MUITO BAIXO");
        }
        else if(escolha > randomNum){
            printf("MUITO ALTO");
        }    
    }
    
    printf("\nO numero era: %d", randomNum);
    printf("\nVoce acertou com %d tentantivas", cont);

    return 0;
}

