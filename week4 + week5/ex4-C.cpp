#include <iostream>
#include <vector>

using namespace std;

void printBoard(const vector<vector<char>>& board) {
    int m = board.size();
    int n = board[0].size();

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

void processMineField(vector<vector<char>>& board) {
    int m = board.size();
    int n = board[0].size();


    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
           
            if (board[i][j] == '*') continue;

            int mines = 0;

           
            for (int dx = -1; dx <= 1; ++dx) {
                for (int dy = -1; dy <= 1; ++dy) {
                    int ni = i + dx;
                    int nj = j + dy;

                    
                    if (ni >= 0 && ni < m && nj >= 0 && nj < n && board[ni][nj] == '*') {
                        mines++;
                    }
                }
            }

          
            board[i][j] = mines + '0';
        }
    }
}

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<char>> board(m, vector<char>(n));

 
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> board[i][j];
        }
    }
 
    processMineField(board);
    printBoard(board);

    return 0;
}
