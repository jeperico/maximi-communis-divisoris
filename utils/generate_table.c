#include <stdio.h>
#include <stdbool.h>

void generateMMC(int x1, int x2) {
  int div = 2;
  int mmc = 1;
  bool noMore = false;

  int prevX1 = x1;
  int prevX2 = x2;

  while(x1 != 1 || x2 != 1) {
    if(x1 % div == 0 || x2 % div == 0) {

      mmc *= div;
      if(x1 % div == 0) x1 /= div;
      if(x2 % div == 0) x2 /= div;

      printf("%-5d %-5d | %d\n", prevX1, prevX2, div);

      prevX1 = x1;
      prevX2 = x2;

      noMore = false;
    } else {
      noMore = true;
    }
    if(noMore) div++;
  }

  printf("%-5d %-5d |-----------\n", prevX1, prevX2);
  printf("            | %d\n\n", mmc);
}
