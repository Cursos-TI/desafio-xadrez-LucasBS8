#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void move_bishop_function(int move)
{
    for (int i = 0; i < move; i++)
    {
        printf("Cima\nDireta\n");
    }
}

void move_rook_function(int move)
{
    int i = 0;
    while (i < move)
    {
        printf("Direita\n");
        i++;
    }
}

void move_queen_function(int move)
{
    int i = 0;
    do
    {
        printf("Esquerda\n");
        i++;
    } while (i < move);
}

void move_knight_function(int move)
{
    int i_2 = 0;
    for (int i = 0; i < move; i++)
    {
        while (i_2 <= 1)
        {
            printf("Cima\n");
            i_2++;
        }
        printf("Esquerda\n");
    }
}

int main()
{
    const int move_bishop = 5;
    const int move_rook = 5;
    const int move_queen = 8;
    const int move_knight = 1;
    int choose;

    do
    {
        printf("Escolha uma das peças:\n");
        printf("1 - Bispo\n");
        printf("2 - Torre\n");
        printf("3 - Rainha\n");
        printf("4 - Cavalo\n");
        printf("0 - Sair\n");
        printf("\n");
        printf("Escolha uma opção: ");
        scanf("%d", &choose);
        switch (choose)
        {
        case 1:
            printf("\nMovimentação do Bispo selecionada:\n");
            move_bishop_function(move_bishop);
            break;
        case 2:
            printf("\nMovimentação da Torre selecionada:\n");
            move_rook_function(move_rook);
            break;
        case 3:
            printf("\nMovimentação da Rainha selecionada:\n");
            move_queen_function(move_queen);
            break;
        case 4:
            printf("\nMovimentação do Cavalo selecionada:\n");
            move_knight_function(move_knight);
            break;
        case 0:
            printf("\nSaindo do programa.");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
        }
        printf("\n\n");
    } while (choose != 0);
    return 0;
}
