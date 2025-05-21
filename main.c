#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include "utils/utils.h"
#include "errors/err.h"

void main() {
  bool retry = true;
  do {
    int x1 = renderX1(false);
    int x2 = renderX2(false);
  
    printf("\033[H\033[J");
  
    generateMMC(x1, x2);
    generateMDC(x1, x2);

    char userInput;
    printf("Do you want to continue? (Y or N): ");
    scanf(" %c", &userInput);
    userInput = toupper(userInput);

    if (userInput != 'Y') {
      retry = false;
    }
  } while (retry);
}
