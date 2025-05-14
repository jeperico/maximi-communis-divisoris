#include <stdio.h>
#include <stdbool.h>
#include "../errors/err.h"

void renderTable(char *text) {
  printf("\n\n +------------------+\n");
  printf("<| %-16s |>\n", text);
  printf(" +------------------+\n\n");
}

int renderX1(bool retry) {
  printf("\033[H\033[J");

  int x1;

  if(retry) invalidInput();

  renderTable("INPUT X1:");
  scanf("%d", &x1);

  if (x1 < 1) renderX1(true);
  else return x1;
}

int renderX2(bool retry) {
  printf("\033[H\033[J");
  
  if(retry) invalidInput();
  
  int x2;
  
  renderTable("INPUT X2:");
  scanf("%d", &x2);
  
  if (x2 < 1) renderX1(true);
  else return x2;
}
