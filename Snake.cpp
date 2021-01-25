#include <iostream>
using namespace std;

#define xLenght 10
#define yLenght 15
#define seed 65

class Snake
{
public:
  //Snake();
  //~Snake();

  int nowLenght = 0;
  int neilX;
  int neilY;

  void createNeil(int x, int y){
    srand(seed);
    this->neilX = rand() % x;
    if (this->neilX == 0 || this->neilX > x-1-this->lenght)
    {
      this->neilX = x/2;
    }
    this->neilY = rand() % y;
    if (this->neilY == 0 || this->neilY > y-1-this->lenght)
    {
      this->neilY = y/2;
    }
  };

  int getLenght(){
    return this->lenght;
  }

private:
  int lenght = 4;
};

int main(int argc, char const *argv[]) {

  cout << "Border : #" << endl;
  cout << "Snake : @" << endl;
  cout << "Apple : $" << endl;

  cout << "Press " << endl;
  getchar();
  system("cls");

  char matrix[xLenght][yLenght];
  Snake snake;
  snake.createNeil(xLenght,yLenght);
  bool *SNAKE = new bool;
  *SNAKE = false;
  for (int i = 0; i < xLenght; ++i) {
    for (int j = 0; j < yLenght; ++j) {
      if ((i == 0 || j == 0 || i == xLenght - 1 || j == yLenght - 1)) {
        matrix[i][j] = '#';
      }
      else {
        if ((i == snake.neilX && j == snake.neilY) || *SNAKE)
        {
           matrix[i][j] = '@';
           *SNAKE = true;
           snake.nowLenght++;
           if (snake.nowLenght > snake.getLenght())
           {
             *SNAKE = false;
           }
        }
        else {
          matrix[i][j] = ' ';
        }
      }
      cout << matrix[i][j];
    }
    cout << endl;
  }

  cout << snake.neilX << "   " << snake.neilY;
  bool gameEnd = false;

  while (!gameEnd) {
    for (int i = 0; i < xLenght; ++i) {
      for (int j = 0; j < yLenght; ++j) {
      }
    }
  }

  return 0;
}
