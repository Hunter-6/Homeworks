#include <iostream>

using namespace std;


int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int toHop(int k, int n) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}


int kiemTra(int k, int n) {
    return (k >= 0 && k <= n && n >= 1 && n <= 20) ? 1 : 0;
}


void nhapKN(int k[], int n[], int *soPhanTu) {
    *soPhanTu = 0;
    int kiemTraNhap = 1;
    while (kiemTraNhap) {
        cin >> k[*soPhanTu] >> n[*soPhanTu];
        if (k[*soPhanTu] == -1 && n[*soPhanTu] == -1) {
            kiemTraNhap = 0;
        } else {
            if (kiemTra(k[*soPhanTu], n[*soPhanTu])) {
                (*soPhanTu)++;
            } else {
                cout << "Nhap sai. Vui long nhap lai." << endl;
            }
        }
    }
}

int main() {
    int k[20], n[20]; 
    int soPhanTu; 


    nhapKN(k, n, &soPhanTu);

    for (int i = 0; i < soPhanTu; ++i) {
        cout << toHop(k[i], n[i]) << endl;
    }

    return 0;
}
