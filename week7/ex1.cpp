#include <iostream>

// Hàm đảo ngược thứ tự của xâu
void reverse(char *a) {
    int len = 0;
    while (a[len] != '\0') {
        len++;
    }
    for (int i = 0; i < len / 2; ++i) {
        char temp = a[i];
        a[i] = a[len - i - 1];
        a[len - i - 1] = temp;
    }
}

// Hàm xóa kí tự c khỏi xâu a
void delete_char(char *a, char c) {
    int len = 0;
    while (a[len] != '\0') {
        if (a[len] == c) {
            for (int i = len; a[i] != '\0'; ++i) {
                a[i] = a[i + 1];
            }
        } else {
            len++;
        }
    }
}

// Hàm độn phải xâu a để có độ dài n
void pad_right(char *a, int n) {
    int len = 0;
    while (a[len] != '\0') {
        len++;
    }
    if (len < n) {
        for (int i = len; i < n; ++i) {
            a[i] = ' ';
        }
        a[n] = '\0';
    }
}

// Hàm độn trái xâu a để có độ dài n
void pad_left(char *a, int n) {
    int len = 0;
    while (a[len] != '\0') {
        len++;
    }
    if (len < n) {
        for (int i = len; i < n; ++i) {
            for (int j = len; j >= 0; --j) {
                a[j + 1] = a[j];
            }
            a[0] = ' ';
            len++;
        }
    }
}

// Hàm cắt xâu a để có độ dài n
void truncate(char *a, int n) {
    int len = 0;
    while (a[len] != '\0') {
        len++;
    }
    if (len > n) {
        a[n] = '\0';
    }
}

// Hàm kiểm tra xâu có đối xứng hay không
bool is_palindrome(char *a) {
    int len = 0;
    while (a[len] != '\0') {
        len++;
    }
    for (int i = 0; i < len / 2; ++i) {
        if (a[i] != a[len - i - 1]) {
            return false;
        }
    }
    return true;
}

// Hàm loại bỏ kí tự trắng ở đầu xâu
void trim_left(char *a) {
    int len = 0;
    while (a[len] != '\0') {
        len++;
    }
    int i = 0;
    while (a[i] == ' ') {
        for (int j = 0; j < len; ++j) {
            a[j] = a[j + 1];
        }
        len--;
    }
}

// Hàm loại bỏ kí tự trắng ở cuối xâu
void trim_right(char *a) {
    int len = 0;
    while (a[len] != '\0') {
        len++;
    }
    while (a[len - 1] == ' ') {
        len--;
    }
    a[len] = '\0';
}

int main() {
    char a[] = "Hello, World!";
    char b[] = "racecar";
    char c[] = "  Welcome   ";
    
    // Test các hàm
    std::cout << "Before reverse: " << a << std::endl;
    reverse(a);
    std::cout << "After reverse: " << a << std::endl;

    std::cout << "Before delete_char: " << b << std::endl;
    delete_char(b, 'r');
    std::cout << "After delete_char: " << b << std::endl;

    std::cout << "Before pad_right: " << c << std::endl;
    pad_right(c, 15);
    std::cout << "After pad_right: " << c << std::endl;

    char d[] = "Hi";
    std::cout << "Before pad_left: " << d << std::endl;
    pad_left(d, 6);
    std::cout << "After pad_left: " << d << std::endl;

    char e[] = "This is a long string.";
    std::cout << "Before truncate: " << e << std::endl;
    truncate(e, 10);
    std::cout << "After truncate: " << e << std::endl;

    std::cout << "Is 'racecar' palindrome? " << std::boolalpha << is_palindrome(b) << std::endl;

    std::cout << "Before trim_left: " << c << std::endl;
    trim_left(c);
    std::cout << "After trim_left: " << c << std::endl;

    std::cout << "Before trim_right: " << c << std::endl;
    trim_right(c);
    std::cout << "After trim_right: " << c << std::endl;

    return 0;
}
