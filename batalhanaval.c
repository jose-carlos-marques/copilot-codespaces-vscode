#include <stdio.h>

#define TAM_TAB 10
#define H 7  // tamanho das matrizes de habilidade (7x7)
#define AGUA 0
#define NAVIO 3
#define AFETADO 5

// ----------------------------
// Função para imprimir o tabuleiro
// ----------------------------
void imprimirTabuleiro(int tab[TAM_TAB][TAM_TAB]) {
    for (int i = 0; i < TAM_TAB; i++) {
        for (int j = 0; j < TAM_TAB; j++) {
            if (tab[i][j] == AGUA) printf(" . ");
            else if (tab[i][j] == NAVIO) printf(" N ");
            else if (tab[i][j] == AFETADO) printf(" * ");
        }
        printf("\n");
    }
}

// ----------------------------
// Cria habilidade em forma de CONE (apontado para baixo)
// ----------------------------
void criarCone(int cone[H][H]) {
    int meio = H / 2;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < H; j++) {

            // A lógica do cone: quanto mais próximo da base, maior a largura.
            // | j - meio | <= i  → define a abertura do cone
            if (abs(j - meio) <= i)
                cone[i][j] = 1;
            else
                cone[i][j] = 0;
        }
    }
}

// ----------------------------
// Cria habilidade em forma de CRUZ
// ----------------------------
void criarCruz(int cruz[H][H]) {
    int meio = H / 2;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < H; j++) {

            // Afeta a linha central OU a coluna central
            if (i == meio || j == meio)
                cruz[i][j] = 1;
            else
                cruz[i][j] = 0;
        }
    }
}

// ----------------------------
// Cria habilidade em forma de OCTAEDRO (losango)
// ----------------------------
void criarOctaedro(int oct[H][H]) {
    int meio = H / 2;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < H; j++) {

            // Condição do losango: |i - meio| + |j - meio| <= meio
            if (abs(i - meio) + abs(j - meio) <= meio)
                oct[i][j] = 1;
            else
                oct[i][j] = 0;
        }
    }
}

// ----------------------------
// Aplica a matriz de habilidade ao tabuleiro
// ----------------------------
void aplicarHabilidade(int tab[TAM_TAB][TAM_TAB], int hab[H][H], int origemLinha, int origemColuna) {
    int desloc = H / 2;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < H; j++) {

            // Converte coordenadas da matriz de habilidade para tabuleiro
            int linhaTab = origemLinha + (i - desloc);
            int colunaTab = origemColuna + (j - desloc);

            // Verifica limites do tabuleiro
            if (linhaTab >= 0 && linhaTab < TAM_TAB &&
                colunaTab >= 0 && colunaTab < TAM_TAB) {

                // Se a habilidade atinge esta posição
                if (hab[i][j] == 1) {
                    // Não sobrescreve navios (valor 3)
                    if (tab[linhaTab][colunaTab] != NAVIO) {
                        tab[linhaTab][colunaTab] = AFETADO;
                    }
                }
            }
        }
    }
}

// ----------------------------
// Programa principal
// ----------------------------
int main() {
    int tabuleiro[TAM_TAB][TAM_TAB] = {0};

    // Colocando alguns navios como exemplo
    tabuleiro[4][4] = NAVIO;
    tabuleiro[5][4] = NAVIO;
    tabuleiro[6][4] = NAVIO;

    // Matrizes de habilidades
    int cone[H][H], cruz[H][H], octaedro[H][H];

    criarCone(cone);
    criarCruz(cruz);
    criarOctaedro(octaedro);

    // Pontos de origem das habilidades
    int origemConeLinha = 2, origemConeColuna = 2;
    int origemCruzLinha = 7, origemCruzColuna = 5;
    int origemOctLinha = 4, origemOctColuna = 7;

    // Aplicando habilidades ao tabuleiro
    aplicarHabilidade(tabuleiro, cone, origemConeLinha, origemConeColuna);
    aplicarHabilidade(tabuleiro, cruz, origemCruzLinha, origemCruzColuna);
    aplicarHabilidade(tabuleiro, octaedro, origemOctLinha, origemOctColuna);

    // Exibir o tabuleiro final
    printf("\n=== TABULEIRO FINAL ===\n");
    imprimirTabuleiro(tabuleiro);

    return 0;
}
