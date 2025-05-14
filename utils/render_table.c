#include <stdio.h>
#include <stdbool.h>
#include "../errors/err.h"

void renderTable() {
  printf("\n\n +------------------+\n");
  printf("<| %-16s |>\n", "Choise:");
  printf(" +------------------+\n\n");
}

void renderMMC() {
  printf("\033[H\033[J");

  printf("\n\n +------------------+\n");
  printf("<| %-16s |>\n", "MMC:");
  printf(" +------------------+\n\n");
}

void renderMDC() {
  printf("\033[H\033[J");

  printf("\n\n +------------------+\n");
  printf("<| %-16s |>\n", "MDC:");
  printf(" +------------------+\n\n");
}

int renderX1(bool retry) {
  printf("\033[H\033[J");

  int x1;

  // if(retry) invalidInput();

  printf("\n\n +------------------+\n");
  printf("<| %-16s |>\n", "INPUT X1:");
  printf(" +------------------+\n\n");
  scanf("%d", &x1);

  if (x1 < 1) renderX1(true);

  return x1;
}

int renderX2(bool retry) {
  printf("\033[H\033[J");
  
  // if(retry) invalidInput();
  
  int x2;
  
  printf("\n\n +------------------+\n");
  printf("<| %-16s |>\n", "INPUT X2:");
  printf(" +------------------+\n\n");
  scanf("%d", &x2);
  
  if (x2 < 1) renderX1(true);

  return x2;
}
