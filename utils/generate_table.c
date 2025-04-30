#include <stdio.h>

void generateMMC(int x1, int x2) {
  printf("X1   X2 | Divisor");

  int divisor = 2;
  int som = 1;
  while (x1 != 1 && x2 != 1) {
    if(x1 % divisor == 0 || x2 % divisor == 0) {

      som *= divisor;
      if(x1 % divisor == 0) {
        x1 /= divisor;
      }
      if(x2 % divisor == 0) {
        x2 /= divisor;
      }
    }
  }

}
