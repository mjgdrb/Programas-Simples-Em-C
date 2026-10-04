#include <stdio.h>
#include <windows.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>


int main(){
    SetConsoleOutputCP(CP_UTF8);

    // RELOGIO DIGITAL

    time_t tempobruto = 0; // Jan 1 1970 (Epoch) == referencia
    struct tm *pTime = NULL;

    bool isRunning = true;

    printf("RELOGIO DIGITAL\n");

    while(isRunning){

        time(&tempobruto);

        pTime = localtime(&tempobruto);

        printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);

        sleep(1);
    }

    return 0;
}