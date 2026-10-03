#include <stdio.h>
#include <windows.h>
#include <string.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);

    printf("MAD LIBS GAME\n");

    char adjetivo1[20] = "";
    char adjetivo2[20] = "";
    char adjetivo3[20] = "";
    char sujeito[30] = "";
    char verbo[30] = "";

    printf("Insira um adjetivo: ");
    fgets(adjetivo1, sizeof(adjetivo1), stdin);
    adjetivo1[strlen(adjetivo1) - 1] = '\0';

    printf("Insira um sujeito: ");
    fgets(sujeito, sizeof(sujeito), stdin);
    sujeito[strlen(sujeito) - 1] = '\0';

    printf("Insira um adjetivo: ");
    fgets(adjetivo2, sizeof(adjetivo2), stdin);
    adjetivo2[strlen(adjetivo2) - 1] = '\0';

    printf("Insira um verbo conjugado: ");
    fgets(verbo, sizeof(verbo), stdin);
    verbo[strlen(verbo) - 1] = '\0';

    printf("Insira um adjetivo: ");
    fgets(adjetivo3, sizeof(adjetivo3), stdin);
    adjetivo3[strlen(adjetivo3) - 1] = '\0';

    printf("\nHoje eu fui a um zoologico %s", adjetivo1);
    printf("\nEm uma exibiçao, eu vi %s", sujeito);
    printf("\n%s estava %s e %s", sujeito, adjetivo2, verbo);
    printf("\nEu estava %s", adjetivo3);

    return 0;
}
