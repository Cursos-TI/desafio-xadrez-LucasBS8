#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Funções de movimentação das peças
//Movimentação do Bispo
void move_bishop_function(int move)
{
    int i = 0;
    while (move > 0)
    {
        while (i < 1)
        {
            printf("Direta\n");
            i++;
        }
        i = 0;
        printf("Cima\n");
        move--;
    }
}

//Movimentação da Torre
void move_rook_function(int move)
{
    if (move > 0)
    {
        printf("Direita\n");
        move_rook_function(--move);
    }
}

//Movimentação da Rainha
void move_queen_function(int move)
{
    if (move > 0)
    {
        printf("Esquerda\n");
        move_queen_function(--move);
    }
}

//Movimentação do Cavalo
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
        // Menu de seleção de peças
        printf("Escolha uma das peças:\n");
        printf("1 - Bispo\n");
        printf("2 - Torre\n");
        printf("3 - Rainha\n");
        printf("4 - Cavalo\n");
        printf("0 - Sair\n");
        printf("\n");
        // Leitura da escolha do usuário
        printf("Escolha uma opção: ");
        scanf("%d", &choose);
        // Switch de seleção de funções
        switch (choose)
        {
        // Movimentação do Bispo
        case 1:
            printf("\nMovimentação do Bispo selecionada:\n");
            move_bishop_function(move_bishop);
            break;
            
        // Movimentação da Torre
        case 2:
            printf("\nMovimentação da Torre selecionada:\n");
            move_rook_function(move_rook);
            break;

        // Movimentação da Rainha
        case 3:
            printf("\nMovimentação da Rainha selecionada:\n");
            move_queen_function(move_queen);
            break;

        // Movimentação do Cavalo
        case 4:
            printf("\nMovimentação do Cavalo selecionada:\n");
            move_knight_function(move_knight);
            break;

        // Sair
        case 0:
            printf("\nSaindo do programa.");
            break;

        // Opção inválida
        default:
            printf("Opção inválida. Tente novamente.\n");
        }
        printf("\n\n");
    } while (choose != 0);
    return 0;
}
