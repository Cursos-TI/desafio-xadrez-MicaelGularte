#include <stdio.h>

int main() {
    
    const int BISPO_MOV = 5;
    const int TORRE_MOV = 5;
    const int RAINHA_MOV = 8;

    printf("=== MOVIMENTAÇÃO DAS PEÇAS - NÍVEL NOVATO ===\n\n");

    
    printf("Movimentação do Bispo:\n");
    for (int i = 1; i <= BISPO_MOV; i++) {
        printf("Cima + Direita (%d)\n", i);
    }

  
    printf("\nMovimentação da Torre:\n");
    int t = 1;
    while (t <= TORRE_MOV) {
        printf("Direita (%d)\n", t);
        t++;
    }

 
    printf("\nMovimentação da Rainha:\n");
    int r = 1;
    do {
        printf("Esquerda (%d)\n", r);
        r++;
    } while (r <= RAINHA_MOV);

    printf("\n=== Fim dos movimentos ===\n");

    return 0;
}
