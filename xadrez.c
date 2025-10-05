#include <stdio.h>

void moverBispoRecursivo(int n);
void moverTorreRecursivo(int n);
void moverRainhaRecursiva(int n);

int main() {
    int i, j, passos;

    printf("===== NÍVEL NOVATO =====\n");

    printf("Digite quantos passos o Bispo deve se mover (até 5): ");
    scanf("%d", &passos);
    for(i=1;i<=passos;i++){
        printf("Bispo: Diagonal Superior Direita (%d)\n", i);
    }

    printf("Digite quantos passos a Torre deve se mover (até 5): ");
    scanf("%d", &passos);
    for(i=1;i<=passos;i++){
        printf("Torre: Direita (%d)\n", i);
    }

    printf("Digite quantos passos a Rainha deve se mover (até 8): ");
    scanf("%d", &passos);
    for(i=1;i<=passos;i++){
        printf("Rainha: Esquerda (%d)\n", i);
    }

    printf("\n===== NÍVEL AVENTUREIRO =====\n");
    printf("Movimento do Cavalo em L (baixo e esquerda)\n");
    for(i=0;i<2;i++){
        printf("Cavalo: Baixo (%d)\n", i+1);
        for(j=0;j<2;j++){
            printf("Cavalo: Esquerda (%d,%d)\n", i+1,j+1);
        }
    }

    printf("\n===== NÍVEL MESTRE =====\n");
    printf("Digite passos para o Bispo recursivo (até 5): ");
    scanf("%d",&passos);
    moverBispoRecursivo(passos);

    printf("Digite passos para a Torre recursiva (até 5): ");
    scanf("%d",&passos);
    moverTorreRecursivo(passos);

    printf("Digite passos para a Rainha recursiva (até 8): ");
    scanf("%d",&passos);
    moverRainhaRecursiva(passos);

    int x=1, y=1;
    while(x<=3 && y<=3){
        if(x==2){
            printf("Cavalo Mestre: Subir\n");
            x++; y++;
            continue;
        }
        if(x==3){
            printf("Cavalo Mestre: Direita\n");
            break;
        }
        printf("Cavalo Mestre: Movimento normal (%d,%d)\n", x, y);
        x++; y++;
    }

    return 0;
}

void moverBispoRecursivo(int n){
    if(n==0) return;
    printf("Bispo (Recursivo): Diagonal Direita Cima (%d)\n", n);
    moverBispoRecursivo(n-1);
}

void moverTorreRecursivo(int n){
    if(n==0) return;
    printf("Torre (Recursivo): Direita (%d)\n", n);
    moverTorreRecursivo(n-1);
}

void moverRainhaRecursiva(int n){
    if(n==0) return;
    printf("Rainha (Recursiva): Esquerda (%d)\n", n);
    moverRainhaRecursiva(n-1);
}
