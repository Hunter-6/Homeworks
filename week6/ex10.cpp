#include <iostream>
#include <cstdlib> 

void generateArray(int arr[], int N) {
    for (int i = 0; i < N; ++i) {
        arr[i] = rand() % 50; 
    }
}

void printTripletsDivisibleBy25(int arr[], int N) {
    for (int i = 0; i < N - 2; ++i) {
        for (int j = i + 1; j < N - 1; ++j) {
            for (int k = j + 1; k < N; ++k) {
                if ((arr[i] + arr[j] + arr[k]) % 25 == 0) {
                    std::cout << "(" << arr[i] << ", " << arr[j] << ", " << arr[k] << ")" << std::endl;
                }
            }
        }
    }
}

int main() {
    const int N = 10; 
    int array[N];


    generateArray(array, N);


    printTripletsDivisibleBy25(array, N);

    return 0;
}
