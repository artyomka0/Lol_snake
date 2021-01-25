#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  cout << "Border : #" << endl;
  cout << "Snake : @" << endl;
  cout << "Apple : $" << endl;

  cout << "Press " << endl;
  getchar();

  system("cls");
  int xLenght = 50;
  int yLenght = 100;

  char matrix[xLenght][yLenght];
  int snakeLong = 4;

  for (int i = 0; i < xLenght; ++i) {
    for (int j = 0; j < yLenght; ++j) {
      if ((i == 0 || j == 0 || i == xLenght - 1 || j == yLenght - 1)) {
        matrix[i][j] = '#';
      }
    }
  }

  bool gameEnd = false;

  while (!gameEnd) {
    for (int i = 0; i < xLenght; ++i) {
      for (int j = 0; j < yLenght; ++j) {
      }
    }
  }

  return 0;
}