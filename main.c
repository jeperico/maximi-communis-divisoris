#include <stdio.h>
#include "utils/utils.h"

void main() {
  renderTable();
  renderMMC();
  renderMDC();
  renderX1(false);
  renderX2(false);
  generateMMC(172, 2123);
  generateMDC(24, 15);
}
