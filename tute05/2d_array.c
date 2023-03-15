#include <stdio.h>

#define SIZE 5

// Function Prototype
int did_player_win(char player, char board[SIZE][SIZE]);

int main(void) {
    char no_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {'X', ' ', ' ', ' ', 'O'},
    };

    char x_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {' ', 'X', ' ', ' ', 'O'},
    };
    char o_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'O', 'O', 'O', 'O'},
        {'X', 'X', ' ', ' ', 'O'},
    };

    if (did_player_win('X', no_wins_board)) {
        printf("X Won This Board!\n");
    } else if (did_player_win('O', no_wins_board)) {
        printf("O Won This Board!\n");
    } else {
        printf("Nobody has won this board!\n");
    }
}

// Function Implementation:
// Determines whether a given player has won the game of tictactoe
// by getting SIZE tokens in a row, in any direction.
int did_player_win(char player, char board[SIZE][SIZE]) {
    // check rows
    int row = 0;
    while (row < SIZE) {
        int count = 0;
        int col = 0;
        while (col < SIZE){
            if (board[row][col] == player ) {
                count++
            }
            col++;
        }
        if (count == SIZE) {
            return 1;
        }
        row++;
    }


    // diagonals
    row = 0;
    int diag1 = 0;
    int diag2 = 0;
    while (row < SIZE) {
        int col = 0;
        while (col < SIZE){
            if (board[row][col] == player && row == col ) {
                diag1++;
            }
            if (board[row][col] == player && row + col == SIZE - 1 ) {
                diag2++;
            }
            col++;
        }
    
        row++;
    }
    if (diag1 == SIZE || diag2 == SIZE) {
        return 1;
    }
    return 0;
}
