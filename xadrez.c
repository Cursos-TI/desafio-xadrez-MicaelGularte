#include <stdio.h>

void moverBispoRecursivo(int n);
void moverTorreRecursivo(int n);
void moverRainhaRecursiva(int n);

int main() {
    int i, j, x, y;

    for (i = 1; i <= 5; i++) {
        printf("Bispo: Diagonal Superior Direita (%d)\n", i);
    }

    for (i = 1; i <= 5; i++) {
        printf("Torre: Direita (%d)\n", i);
    }

    for (i = 1; i <= 8; i++) {
        printf("Rainha: Esquerda (%d)\n", i);
    }

    for (i = 1; i <= 2; i++) {
        printf("Cavalo: Baixo (%d)\n", i);
        for (j = 1; j <= 2; j++) {
            printf("Cavalo: Esquerda (%d,%d)\n", i, j);
        }
    }

    moverBispoRecursivo(5);
    moverTorreRecursivo(5);
    moverRainhaRecursiva(8);

    for (x = 1, y = 1; x <= 3 && y <= 3; x++, y++) {
        if (x == 2) {
            printf("Cavalo: Subir\n");
            continue;
        }
        if (x == 3) {
            printf("Cavalo: Direita\n");
            break;
        }
    }

    return 0;
}

void moverBispoRecursivo(int n) {
    if (n == 0) return;
    printf("Bispo (Recursivo): Diagonal Direita Cima (%d)\n", n);
    moverBispoRecursivo(n - 1);
}

void moverTorreRecursivo(int n) {
    if (n == 0) return;
    printf("Torre (Recursivo): Direita (%d)\n", n);
    moverTorreRecursivo(n - 1);
}

void moverRainhaRecursiva(int n) {
    if (n == 0) return;
    printf("Rainha (Recursivo): Esquerda (%d)\n", n);
    moverRainhaRecursiva(n - 1);
}
