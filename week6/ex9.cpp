#include <cstdlib> // Thư viện chứa hàm rand()

int randomNumber(int N) {
    return rand() % N; // Trả về phần dư của phép chia ngẫu nhiên cho N
}
