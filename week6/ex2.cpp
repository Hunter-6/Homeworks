#include <iostream>
#include <vector>
#include <queue>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<vector<char>> createMineMap(int m, int n, int K) {
    vector<vector<char>> mineMap(m, vector<char>(n, '.')); 

    srand(time(0));
    int count = 0;
    while (count < K) {
        int x = rand() % m; 
        int y = rand() % n; 
        if (mineMap[x][y] != '*') {
            mineMap[x][y] = '*'; 
            count++;
        }
    }

    return mineMap;
}


void printMap(const vector<vector<char>>& map) {
    for (const auto& row : map) {
        for (char cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
}


bool checkGameOver(const vector<vector<char>>& mineMap, int x, int y) {
    if (mineMap[x][y] == '*') {
        cout << "YOU'RE DEAD!" << endl;
        return true; 
    }
    return false; 
}


void floodFill(vector<vector<char>>& map, int x, int y) {
    int m = map.size();
    int n = map[0].size();
    queue<pair<int, int>> q;
    q.push({x, y});

    while (!q.empty()) {
        int curX = q.front().first;
        int curY = q.front().second;
        q.pop();


        for (int i = max(0, curX - 1); i <= min(m - 1, curX + 1); i++) {
            for (int j = max(0, curY - 1); j <= min(n - 1, curY + 1); j++) {
                if (map[i][j] == '.') {
                    map[i][j] = '0';
                    q.push({i, j}); 
                }
            }
        }
    }
}

int main() {
    int m, n, K;
    cout << "Enter m, n, K: ";
    cin >> m >> n >> K;

    vector<vector<char>> mineMap = createMineMap(m, n, K);

    while (true) {
        printMap(mineMap);

        int x, y;
        cout << "Enter coordinate (x, y): ";
        cin >> x >> y;

        if (checkGameOver(mineMap, x, y)) {
            printMap(mineMap);
            break; 
        } else {
            floodFill(mineMap, x, y); 
        }
    }

    return 0;
}
