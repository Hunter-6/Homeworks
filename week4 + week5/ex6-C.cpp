#include <iostream>
#include <vector>

using namespace std;


void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}


vector<vector<int>> generateMagicMatrix(int N) {
    vector<vector<int>> matrix(N, vector<int>(N, 0)); 

    int num = 1; 
    int row = 0, col = N / 2; 

    while (num <= N * N) {
        matrix[row][col] = num; 

        int nextRow = (row - 1 + N) % N; 
        int nextCol = (col + 1) % N; 

 
        if (matrix[nextRow][nextCol] != 0) {
            row = (row + 1) % N;
        } else {
            row = nextRow;
            col = nextCol;
        }

        num++; 
    }

    return matrix;
}

int main() {
    int N;
    cout << "Enter N (odd positive integer): ";
    cin >> N;


    if (N % 2 == 0 || N <= 0) {
        cout << "Invalid input. N must be an odd positive integer." << endl;
        return 1;
    }


    vector<vector<int>> magicMatrix = generateMagicMatrix(N);
    cout << "Magic Matrix:" << endl;
    printMatrix(magicMatrix);

    return 0;
}
