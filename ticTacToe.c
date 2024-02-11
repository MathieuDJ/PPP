#include <stdio.h>
#include <stdbool.h>

void drawBoard(char board[3][3]);
void makeMove(char board[3][3], char player, int row, int col);
bool checkForWin(char board[3][3]);

void drawBoard(char board[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);

            if (j < 2) {
                printf("|");
            }
        }

        printf("\n");

        if (i < 2) {
            printf("-----------\n");
        }
    }
}

void markBoard(char board[3][3], char player, int row, int col) {
    row --;
    col --;
    if (board[row][col] == ' ') {
        board[row][col] = player;
    } else {
        printf("Invalid move. You lost your turn\n");
    }
}

bool checkForWin(char board[3][3]) {
    int i;
    int j = 0;
    
    for (i = 0; i < 3; i++) {
        if (board[i][j] == 'X' && board[i][j+1] == 'X' && board[i][j+2] == 'X' ||
         board[i][j] == 'O' && board[i][j+1] == 'O' && board[i][j+2] == 'O' ||
         board[j][i] == 'X' && board[j+1][i] == 'X' && board[j+2][i] == 'X' ||
         board[j][i] == 'O' && board[j+1][i] == 'O' && board[j+2][i] == 'O' ||
         board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X' ||
         board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O' ||
         board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X' ||
         board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O') {
            return true;
         }  
        }
    return false;
}


int main()  {

    char board[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    int row, col;

    while (!checkForWin(board)) {
    drawBoard(board);
    printf("Player 1 (X), it's your turn! \n");
    scanf("%d %d", &row, &col);

    markBoard(board, 'X', row, col);
    if (checkForWin(board)) {
        drawBoard(board);
        printf("Player 1 (X) wins!\n");
        break;  // Exit the loop if player 1 wins
    }

    drawBoard(board);

    printf("Player 2 (O), it's your turn! \n");
    scanf("%d %d", &row, &col);

    markBoard(board, 'O', row, col);
    if (checkForWin(board)) {
        drawBoard(board);
        printf("Player 2 (O) wins!\n");
        break;  // Exit the loop if player 2 wins
    }
}


    
    return 0;
}

