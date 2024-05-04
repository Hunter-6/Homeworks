#include <iostream>
#include <cstring>

using namespace std;

void print_banner(char* banner[], int rows, int cols) {
  for (int i = 0; i < rows; ++i) {
    cout << banner[i] << endl;
  }
}

int main(int argc, char* argv[]) {
  if (argc < 3) {
    cerr << "Usage: banner <rows> <cols>" << endl;
    return 1;
  }

  int rows = atoi(argv[1]);
  int cols = atoi(argv[2]);

  if (rows <= 0 || cols <= 0) {
    cerr << "Error: Invalid rows or columns" << endl;
    return 1;
  }

  char** banner = new char*[rows];
  if (!banner) {
    cerr << "Error: Failed to allocate memory for banner" << endl;
    return 1;
  }

  for (int i = 0; i < rows; ++i) {
    banner[i] = new char[cols + 1];
    if (!banner[i]) {
      for (int j = 0; j < i; ++j) {
        delete[] banner[j];
      }
      delete[] banner;
      cerr << "Error: Failed to allocate memory for banner row" << endl;
      return 1;
    }
  }

  for (int i = 0; i < rows; ++i) {
    cout << "Enter text for row " << i + 1 << ": ";
    cin.getline(banner[i], cols);

    if (banner[i][0] == '\n') {
      memmove(banner[i], banner[i] + 1, cols - 1);
    }
    if (banner[i][cols - 1] == '\n') {
      banner[i][cols - 1] = '\0';
    }

    for (int j = cols; j > 0; --j) {
      if (banner[i][j - 1] == ' ') {
        banner[i][j - 1] = '\0';
      } else {
        break;
      }
    }
  }

  print_banner(banner, rows, cols);

  for (int i = 0; i < rows; ++i) {
    delete[] banner[i];
  }
  delete[] banner;

  return 0;
}
