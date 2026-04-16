#include <iostream>
using namespace std;

char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};

void display() {
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++)
            cout << board[i][j] << " ";
        cout << endl;
    }
}

bool checkWin() {
    for(int i=0;i<3;i++)
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2])
            return true;

    for(int i=0;i<3;i++)
        if(board[0][i]==board[1][i] && board[1][i]==board[2][i])
            return true;

    if(board[0][0]==board[1][1] && board[1][1]==board[2][2])
        return true;

    if(board[0][2]==board[1][1] && board[1][1]==board[2][0])
        return true;

    return false;
}

int main() {
    int choice;
    char player = 'X';

    for(int turn=0; turn<9; turn++) {
        display();
        cout << "Player " << player << ", enter position: ";
        cin >> choice;

        int r = (choice-1)/3;
        int c = (choice-1)%3;

        if(board[r][c] != 'X' && board[r][c] != 'O') {
            board[r][c] = player;
            if(checkWin()) {
                display();
                cout << "Player " << player << " wins!\n";
                return 0;
            }
            player = (player=='X') ? 'O' : 'X';
        } else {
            cout << "Invalid move!\n";
            turn--;
        }
    }

    cout << "It's a draw!\n";
}