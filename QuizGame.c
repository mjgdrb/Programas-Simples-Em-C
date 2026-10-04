#include <stdio.h>
#include <windows.h>
#include <ctype.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);

    printf("==== QUIZ GAME ====\n");

    char questoes[][100] = {"\nQual o maior planeta do sistema solar?\n",
                             "\nQual o planeta mais quente?\n",
                             "\nQual o planeta com mais luas?\n",
                             "\nQual o planeta mais distante do Sol?\n"};

    char opcoes[][100] = {"A. Jupiter \nB. Saturno \nC. Urano \nD. Neturno",
                          "A. Mercurio \nB. Venus  \nC. Terra \nD. Marte",
                          "A. Terra \nB. Marte \nC. Jupiter \nD. Saturno",
                          "A. Terra \nB. Venus \nC. Netuno \nD. Marte"};

    char respostas[] = {'A', 'B', 'D', 'C'};

    int quantidadeQuestoes = sizeof(questoes) / sizeof(questoes[0]);

    char resposta = '\0';

    int pontuacao = 0;

    for(int i = 0; i<quantidadeQuestoes; i++){
        printf("%s\n", questoes[i]);
        printf("%s\n", opcoes[i]);
 

        printf("Insira sua resposta: ");
        scanf(" %c", &resposta);

        resposta = toupper(resposta);

        if(resposta == respostas[i]){
            printf("\n-> CORRETO!\n");
            pontuacao++;
        }
        else{
            printf("\n-> ERRADO!\n");
        }
    }

    printf("\n-> Sua pontuação é %d/%d", pontuacao, quantidadeQuestoes);

    return 0;
}

