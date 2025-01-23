#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main() {

    int casa_torre;
    int casa_bispo;
    int casa_rainha;
    int casa_cavalo;
    int direcao_index;
    int direcao_diagonal_index;
    int direcao_cavalo;

    char *direcoes[] = {"Cima", "Direita", "Baixo", "Esquerda"};  
    char *direcao_diagonal[] = {"Cima, Direita", "Baixo, Direita", "Baixo, Esquerda", "Cima, Esquerda"};
    char *direcoes_cavalo[] = {"Cima, Cima, Direita", "Cima, Cima, Esquerda", "Direita, Direita, Cima", "Direita, Direita, Baixo", "Baixo, Baixo, Direita", "Baixo, Baixo, Esquerda", "Esquerda, Esquerda, Cima", "Esquerda, Esquerda, Baixo"};
    
 
    

    printf("Digite o numero de casas para mover a Torre: \n");
    scanf("%d", &casa_torre);
    printf("Escolha a direcao (0: Cima, 1: Direita, 2: Baixo, 3: Esquerda): \n");
    scanf("%d", &direcao_index);
    for (int i = 0; i < casa_torre; i++) {
        printf("%s ", direcoes[direcao_index]);
      
    }
    printf("\n");
    printf("Voce andou %d casas para a %s \n", casa_torre, direcoes[direcao_index]);
    

    printf("Digite o numero de casas para mover o Bispo: ");
    scanf("%d", &casa_bispo);
    printf("Escolha a direcao (0: Cima, Direita, 1: Baixo, Direita, 2: Baixo, Esquerda, 3: Cima, Esquerda): \n");
    scanf("%d", &direcao_diagonal_index);

    for (int i = 0; i < casa_bispo; i++) {
        printf("%s ", direcao_diagonal[direcao_diagonal_index]);
      
    }
    printf("\n");
    printf("Voce andou %d casas para a diagonal %s \n", casa_bispo, direcao_diagonal[direcao_diagonal_index]);

    printf("Digite o numero de casas para mover a Rainha: ");
    scanf("%d", &casa_rainha);
    printf("Escolha a direcao (0: Cima, 1: Direita, 2: Baixo, 3: Esquerda): \n");
    scanf("%d", &direcao_index);

    for (int i = 0; i < casa_rainha; i++) {
        printf("%s ", direcoes[direcao_index]);
    }
    printf("\n");
    printf("Voce andou %d casas para a %s \n", casa_rainha, direcoes[direcao_index]);

    printf("Digite o numero de casas para mover o Cavalo: ");
    scanf("%d", &casa_cavalo);
    printf("Escolha a direcao (0: Cima, Cima, Direita, 1: Cima, Cima, Esquerda, 2: Direita, Direita, Cima, 3: Direita, Direita, Baixo, 4: Baixo, Baixo, Direita, 5: Baixo, Baixo, Esquerda, 6: Esquerda, Esquerda, Cima, 7: Esquerda, Esquerda, Baixo): \n");
    scanf("%d", &direcao_cavalo);

    int i = 0;
    while (i < casa_cavalo) {
        for(int j = 0; j < 3; j++) {
            printf("%s ", direcoes_cavalo[direcao_cavalo]);
        
        }
        i++;
    }
    printf("\n");
    printf("Voce andou %d movimentos para a direcao %s \n", casa_cavalo, direcoes_cavalo[direcao_cavalo]);
    return 0;

    // 
}