#include <stdio.h>

void moverTorre(int casas, int direcao_index, char* direcoes[]) {

    printf("Digite o numero de casas para mover a Torre: \n");
    scanf("%d", &casas);
    printf("Escolha a direcao (0: Cima, 1: Direita, 2: Baixo, 3: Esquerda): \n");
    scanf("%d", &direcao_index);
    
    for (int i = 0; i < casas; i++) {
        printf("%s ", direcoes[direcao_index]);
    }
    printf("\n");
    printf("Voce andou %d casas para a %s \n", casas, direcoes[direcao_index]);

}

void moverBispo(int casas, int direcao_index, char* direcao_diagonal[]) {
    printf("Digite o numero de casas para mover o Bispo: ");
    scanf("%d", &casas);
    printf("Escolha a direcao (0: Cima, Direita, 1: Baixo, Direita, 2: Baixo, Esquerda, 3: Cima, Esquerda): \n");
    scanf("%d", &direcao_index);

    for (int i = 0; i < casas; i++) {
        printf("%s ", direcao_diagonal[direcao_index]);
    }
    printf("\n");
    printf("Voce andou %d casas para a %s \n", casas, direcao_diagonal[direcao_index]);

}

void moverRainha(int casas, int direcao_index, char* direcoes[]) {
    printf("Digite o numero de casas para mover a Rainha: ");
    scanf("%d", &casas);
    printf("Escolha a direcao (0: Cima, 1: Direita, 2: Baixo, 3: Esquerda): \n");
    scanf("%d", &direcao_index);

    for (int i = 0; i < casas; i++) {
        printf("%s ", direcoes[direcao_index]);
    }
    printf("\n");
    printf("Voce andou %d casas para a %s \n", casas, direcoes[direcao_index]);
}

void moverCavalo(int casas, int direcao_cavalo_index, char* direcoes_cavalo[]) {
    printf("Digite o numero de casas para mover o Cavalo: ");
    scanf("%d", &casas);
    printf("Escolha a direcao (0: Cima, Cima, Direita, 1: Cima, Cima, Esquerda, 2: Direita, Direita, Cima, 3: Direita, Direita, Baixo, 4: Baixo, Baixo, Direita, 5: Baixo, Baixo, Esquerda, 6: Esquerda, Esquerda, Cima, 7: Esquerda, Esquerda, Baixo): \n");
    scanf("%d", &direcao_cavalo_index);

    int i = 0;
    while (i < casas) {
        for(int j = 0; j < 3; j++) {
            printf("%s ", direcoes_cavalo[direcao_cavalo_index]);
        
        }
        i++;
    }
    printf("\n");
    printf("Voce andou %d casas para a direcao %s \n", casas, direcoes_cavalo[direcao_cavalo_index]);
}



int main() {
    int casas;
    int direcao_index;
    int direcao_cavalo_index;
    char* direcoes[] = {"Cima", "Direita", "Baixo", "Esquerda"};
    char *direcao_diagonal[] = {"Cima, Direita", "Baixo, Direita", "Baixo, Esquerda", "Cima, Esquerda"};
    char *direcoes_cavalo[] = {"Cima, Cima, Direita", "Cima, Cima, Esquerda", "Direita, Direita, Cima", "Direita, Direita, Baixo", "Baixo, Baixo, Direita", "Baixo, Baixo, Esquerda", "Esquerda, Esquerda, Cima", "Esquerda, Esquerda, Baixo"};

    moverTorre(casas, direcao_index, direcoes);
    moverBispo(casas, direcao_index, direcao_diagonal);
    moverRainha(casas, direcao_index, direcoes);
    moverCavalo(casas, direcao_cavalo_index, direcoes_cavalo);

}