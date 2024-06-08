#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

const int ROWS = 3, COLS = 3;
char board[ROWS][COLS] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };

void print_board() {
    std::cout << "  0 1 2\n";
    for (int i = 0; i < ROWS; i++) {
        std::cout << i << " ";
        for (int j = 0; j < COLS; j++) {
            std::cout << board[i][j] << "|";
        }
        std::cout << "\n";
    }
}

bool make_move(char player, int row, int col) {
    if (row >= 0 && row < ROWS && col >= 0 && col < COLS && board[row][col] == ' ') {
        board[row][col] = player;
        return true;
    }
    return false;
}

bool check_winner(char player) {
    // check rows
    for (int i = 0; i < ROWS; i++) {
        int j;
        for (j = 0; j < COLS; j++) {
            if (board[i][j] != player) {
                break;
            }
        }
        if (j == COLS) {
            return true;
        }
    }

    // check cols
    for (int j = 0; j < COLS; j++) {
        int i;
        for (i = 0; i < ROWS; i++) {
            if (board[i][j] != player) {
                break;
            }
        }
        if (i == ROWS) {
            return true;
        }
    }

    // check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true;
    }

    return false;
}

void play_against_AI() {
    std::cout << "Playing against AI\n";
    char player = 'X';
    while (true) {
        int row, col;
        if (player == 'X') {
            std::cout << "Player " << player << ", enter your move (row col): ";
            std::cin >> row >> col;
            row--;
            col--;
        }
        else {
            std::cout << "AI move\n";
            // AI logic here
            // randomly choose a move
            do {
                row = rand() % ROWS;
                col = rand() % COLS;
            } while (!make_move(player, row, col));
        }

        if (!make_move(player, row, col)) {
            continue;
        }

        print_board();
        if (check_winner(player)) {
            std::cout << "AI wins!";
      break;
        }

        if (player == 'X') {
            player = 'O';
        }
        else {
            player = 'X';
        }
    }
}

void play_2_player() {
    std::cout << "Playing 2 player\n";
    char player = 'X';
    while (true) {
        int row, col;
        std::cout << "Player " << player << ", enter your move (row col): ";
        std::cin >> row >> col;
        row--;
        col--;

        if (!make_move(player, row, col)) {
            continue;
        }

        print_board();
        if (check_winner(player)) {
            std::cout << "Player " << player << " wins!\n";
            break;
        }

        if (player == 'X') {
            player = 'O';
        }
        else {
            player = 'X';
        }
    }
}

int main() {
    srand(time(0));
    int game_mode;
    int rounds_won_X = 0, rounds_won_O = 0;
    while (true) {
        std::cout << "Enter game mode (1 = play against AI, 2 = 2 player game, 0 = quit): ";
        std::cin >> game_mode;
        if (game_mode == 0) {
            break;
        }
        else if (game_mode == 1) {
            play_against_AI();
            if (check_winner('X')) {
                rounds_won_X++;
            }
            else {
                rounds_won_O++;
            }
        }
        else if (game_mode == 2) {
            play_2_player();
            if (check_winner('X')) {
                rounds_won_X++;
            }
            else {
                rounds_won_O++;
            }
        }

        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                board[i][j] = ' ';
            }
        }

        if (rounds_won_X == 3 || rounds_won_O == 3) {
            if (rounds_won_X > rounds_won_O) {
                std::cout << "X wins the game\n";
            }
            else {
                std::cout << "O wins the game\n";
            }
            break;
        }
    }

    return 0;
}
