#include <iostream>
#include <cstring>

using namespace std;

char* to_upper(const char* s) {
  size_t len = strlen(s);
  char* result = new char[len + 1];
  if (!result) return nullptr;

  for (size_t i = 0; i < len; ++i) {
    result[i] = toupper(s[i]);
  }

  result[len] = '\0';
  return result;
}

char* to_lower(const char* s) {
  size_t len = strlen(s);
  char* result = new char[len + 1];
  if (!result) return nullptr;

  for (size_t i = 0; i < len; ++i) {
    result[i] = tolower(s[i]);
  }

  result[len] = '\0';
  return result;
}

char* remove_vowels(const char* s) {
  size_t len = strlen(s);
  size_t count = 0;
  for (size_t i = 0; i < len; ++i) {
    if (strchr("aeiouAEIOU", s[i])) ++count;
  }

  char* result = new char[len - count + 1];
  if (!result) return nullptr;

  size_t j = 0;
  for (size_t i = 0; i < len; ++i) {
    if (!strchr("aeiouAEIOU", s[i])) {
      result[j++] = s[i];
    }
  }

  result[j] = '\0';
  return result;
}

char* replace_spaces_with_underscores(const char* s) {
  size_t len = strlen(s);
  size_t count = 0;
  for (size_t i = 0; i < len; ++i) {
    if (s[i] == ' ') ++count;
  }

  char* result = new char[len + count + 1];
  if (!result) return nullptr;

  size_t j = 0;
  for (size_t i = 0; i < len; ++i) {
    if (s[i] == ' ') {
      result[j++] = '_';
      result[j++] = '_';
    } else {
      result[j++] = s[i];
    }
  }

  result[j] = '\0';
  return result;
}

char* concatenate_strings(const char* s1, const char* s2) {
  size_t len1 = strlen(s1);
  size_t len2 = strlen(s2);
  char* result = new char[len1 + len2 + 1];
  if (!result) return nullptr;

  strcpy(result, s1);
  strcpy(result + len1, s2);

  result[len1 + len2] = '\0';
  return result;
}

int main() {
  const char* s = "Hello, World!";

  char* upper = to_upper(s);
  char* lower = to_lower(s);
  char* without_vowels = remove_vowels(s);
  char* with_underscores = replace_spaces_with_underscores(s);
  char* concatenated = concatenate_strings(s, "Welcome to C++");

  cout << "Uppercase: " << upper << endl;
  cout << "Lowercase: " << lower << endl;
  cout << "Without vowels: " << without_vowels << endl;
  cout << "With underscores: " << with_underscores << endl;
  cout << "Concatenated: " << concatenated << endl;

  delete[] upper;
  delete[] lower;
  delete[] without_vowels;
  delete[] with_underscores;
  delete[] concatenated;

  return 0;
}
