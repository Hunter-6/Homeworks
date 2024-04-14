#include <iostream>
#include <cctype>

using namespace std;

const int FONT_SIZE = 3; 
const int SCREEN_WIDTH = 12 * FONT_SIZE + 2; 
const int SCREEN_HEIGHT = 6 * FONT_SIZE;

char screen[SCREEN_HEIGHT][SCREEN_WIDTH];


void drawChar(char c, int x, int y) {
  //chuyeern ddoori c thanhf chuwx hoa
  c = toupper(c);


  switch (c) {
    case 'K':
      for (int i = 0; i < FONT_SIZE; ++i) {
        screen[y + i][x] = '#';
        screen[y + i][x + FONT_SIZE - 1] = '#';
        screen[y][x + i] = '#';
      }
      for (int i = FONT_SIZE; i < 2 * FONT_SIZE; ++i) {
        screen[y + i][x + FONT_SIZE / 2] = '#';
      }
      break;

    case 'E':
      for (int i = 0; i < FONT_SIZE; ++i) {
        screen[y + i][x] = '#';
        screen[y + i][x + FONT_SIZE - 1] = '#';
      }
      for (int i = FONT_SIZE; i < 3 * FONT_SIZE; ++i) {
        screen[y][x + i] = '#';
      }
      for (int i = 0; i < FONT_SIZE; ++i) {
        screen[y + 2 * FONT_SIZE + i][x] = '#';
        screen[y + 2 * FONT_SIZE + i][x + FONT_SIZE - 1] = '#';
      }
      break;

    case 'V':
      for (int i = 0; i < FONT_SIZE; ++i) {
        screen[y + i][x + i] = '#';
        screen[y + i][x + FONT_SIZE - i - 1] = '#';
      }
      for (int i = FONT_SIZE; i < 3 * FONT_SIZE; ++i) {
        screen[y][x + i] = '#';
      }
      break;

    case 'I':
      for (int i = 0; i < 3 * FONT_SIZE; ++i) {
        screen[y + i][x + FONT_SIZE / 2] = '#';
      }
      break;

    case 'N':
      for (int i = 0; i < 3 * FONT_SIZE; ++i) {
        screen[y + i][x] = '#';
      }
      for (int i = 0; i < FONT_SIZE; ++i) {
        screen[y + i][x + FONT_SIZE - i - 1] = '#';
      }
      break;

    default:
      //in kys tuwj binfh thuownfg neeus khoong phari nhuwnxg chuwx casi: 'K', 'E', 'V', 'I', 'N'
      screen[y][x] = c;
  }
}


void printScreen() {
  for (int y = 0; y < SCREEN_HEIGHT; ++y) {
    for (int x = 0; x < SCREEN_WIDTH; ++x) {
      cout << screen[y][x];
    }
    cout << endl;
  }
}

int main() {
  string word;
  cout << "Nhập một từ tiếng Anh (độ dài <= 12 ký tự): ";
  cin >> word;


  int y = SCREEN_HEIGHT / 2 - FONT_SIZE; 
  for (int i = 0; i < word.length(); ++i) {
    int x = i * (FONT_SIZE + 1); 
    drawChar(word[i], x, y);
  }
    if (word.length() > 12) {
    cout << "Lỗi: Độ dài từ nhập vào vượt quá 12 ký tự!" << endl;
    return 1;
  }

  // In màn hình
  printScreen();

  return 0;
}
