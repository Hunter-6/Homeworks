#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countMaxValues(int N, vector<pair<int, int>>& steps) {
    int max_value = 0;
    for (int i = 0; i < N; ++i) {
        max_value = max(max_value, steps[i].first * steps[i].second);
    }
    int count = 0;
    for (int i = 0; i < N; ++i) {
        if (steps[i].first * steps[i].second == max_value) {
            count++;
        }
    }
    return count;
}

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> steps(N);
    for (int i = 0; i < N; ++i) {
        cin >> steps[i].first >> steps[i].second;
    }
    
    int result = countMaxValues(N, steps);
    cout << result << endl;

    return 0;
}
