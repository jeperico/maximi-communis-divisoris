#include <stdbool.h>

#ifndef UTILS_H
#define UTILS_H

void renderTable(char *text);
int renderX1(bool retry);
int renderX2(bool retry);
void generateMMC(int x1, int x2);
void generateMDC(int x1, int x2);

#endif
