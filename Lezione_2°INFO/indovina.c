#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    //GESTIONE DELLA MEMORIA
    int tentativo=0, nNascosto=0, nTentativi = 0;

    //GENERAZIONE DEL NUMERO NASCOSTO
    srand(time(0));
    nNascosto = rand()%5+1;

    //RICHIEDO ALL'UTENTE DI FARE UN TENTATIVO
    printf("Prova ad indovinare il numero nascosto: ");
    scanf("%d", &tentativo);
}
