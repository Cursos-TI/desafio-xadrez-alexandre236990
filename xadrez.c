#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bispo(){

    int bispo = 5;

    // Movimentação do bispo
    printf("\nMovimento do bispo: \n\n");


    //loop for do bispo
    for (int j = 1; j <= bispo; j++)
    {
        printf("Diagonal superior direita\n");
    }


}

void torre(){

    int l = 1;

    // Movimentação da torre
    printf("\nMovimento do torre: \n\n");

    // loop do-while da torre
    do
    {
        printf("Direita\n");

        l++;
    } while (l <= 5);

   
}

void rainha(){

    int i = 1;

        // Movimentação da rainha
    printf("\nMovimento do rainha: \n\n");


    //loop while da rainha
    while (i <= 8)

    {
        printf("Esquerda\n");

        i++;
    }

   
}

void cavalo(){

// Movimentação do cavalo
printf("\nMovimento do cavalo: \n\n");

//Loop for com multiplas variaveis

for (int i = 0, j = 0; i <= 2 && j <= 1; i++, j++)

{  // primeira Movimentação do Cavalo

    printf("Cavalo pra cima\n");
    continue;
}
{ //Segunda Movimentação do Cavalo

    printf("Cavalo pra direita\n");
}


}


int main(){

    //Chamando as funçoes Recursivas

    bispo();

    torre();

    rainha();

    cavalo();

    return 0;
}