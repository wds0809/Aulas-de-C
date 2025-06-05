#include <stdio.h>

int main() {
    // Declaração do tabuleiro (matriz 10x10)
    int matriz[10][10];

    // Inicializa todas as posições do tabuleiro com 0 (água)
    for (int linha = 0; linha < TAMANHO_TABULEIRO; linha++) {
        for (int coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++) {
            tabuleiro[linha][coluna] = AGUA;
        }
    }

    // Vetores que representam os navios (não são estritamente necessários, mas incluídos conforme especificado)
    int navio_horizontal[TAMANHO_NAVIO] = {NAVIO, NAVIO, NAVIO};
    int navio_vertical[TAMANHO_NAVIO] = {NAVIO, NAVIO, NAVIO};

    // Coordenadas iniciais dos navios (pré-definidas no código)
    int linha_horizontal = 2;
    int coluna_horizontal = 4;

    int linha_vertical = 5;
    int coluna_vertical = 7;

    // Validação de posição do navio horizontal (cabe no tabuleiro)
    if (coluna_horizontal + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {
        // Verifica se não há sobreposição
        int sobreposicao = 0;
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            if (tabuleiro[linha_horizontal][coluna_horizontal + i] != AGUA) {
                sobreposicao = 1;
                break;
            }
        }

        // Posiciona o navio horizontal se não houver sobreposição
        if (!sobreposicao) {
            for (int i = 0; i < TAMANHO_NAVIO; i++) {
                tabuleiro[linha_horizontal][coluna_horizontal + i] = navio_horizontal[i];
            }
        } else {
            printf("Erro: Sobreposição detectada ao posicionar o navio horizontal.\n");
        }
    } else {
        printf("Erro: O navio horizontal excede os limites do tabuleiro.\n");
    }

    // Validação de posição do navio vertical (cabe no tabuleiro)
    if (linha_vertical + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {
        // Verifica se não há sobreposição
        int sobreposicao = 0;
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            if (tabuleiro[linha_vertical + i][coluna_vertical] != AGUA) {
                sobreposicao = 1;
                break;
            }
        }

        // Posiciona o navio vertical se não houver sobreposição
        if (!sobreposicao) {
            for (int i = 0; i < TAMANHO_NAVIO; i++) {
                tabuleiro[linha_vertical + i][coluna_vertical] = navio_vertical[i];
            }
        } else {
            printf("Erro: Sobreposição detectada ao posicionar o navio vertical.\n");
        }
    } else {
        printf("Erro: O navio vertical excede os limites do tabuleiro.\n");
    }

    // Exibição do tabuleiro no console
    printf("\nTABULEIRO BATALHA NAVAL\n\n");

    for (int j = 0; j < 10; j++) {
        printf("%c ", linha[j]); // imprimir os números das colunas
    }

    return 0;
}