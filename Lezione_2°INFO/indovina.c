#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int tentativo=0, nNascosto=0, nTentativi = 0;
    srand(time(0));
    nNascosto = rand()%5+1;

    do{
        printf("Prova ad indovinare il numero nascosto: ");
        scanf("%d", &tentativo);
        nTentativi++;
    }while(nNascosto != tentativo && nTentativi<4);
    if(nNascosto == tentativo){
        printf("Ottimo, hai indovinato il numero!");
    }else{
        printf("Hai finito i tentativi e quindi hai perso! Il numero era %d", nNascosto);
    }
}
