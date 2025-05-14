#include <stdio.h>
#include "utils/utils.h"
#include "errors/err.h"

void main() {
  renderTable();

  renderMMC();
  renderMDC();

  int x1 = renderX1(false);
  int x2 = renderX2(false);

  printf("\033[H\033[J");

  generateMMC(x1, x2);
  generateMDC(x1, x2);
}
