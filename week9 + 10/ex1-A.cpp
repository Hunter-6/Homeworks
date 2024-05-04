#include <iostream>
#include <cstring>

using namespace std;

char *concat(const char *s1, const char *s2) {
  size_t len1 = strlen(s1);
  size_t len2 = strlen(s2);
  size_t len = len1 + len2 + 1; 

  char *result = new char[len];
  if (result == nullptr) {
    return nullptr;
  }

  strcpy(result, s1);

  strcat(result, s2);

  return result;
}

int main() {
  const char *s1 = "Hello";
  const char *s2 = "World";

  char *result = concat(s1, s2);
  if (result != nullptr) {
    cout << "Chuỗi kết quả: " << result << endl;
    delete[] result;
  } else {
    cout << "Lỗi cấp phát bộ nhớ!" << endl;
  }

  return 0;
}
