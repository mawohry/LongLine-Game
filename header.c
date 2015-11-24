#include "header.h"  /* Include the header (not strictly necessary here) */

/* Return true if grid positions x, y and z hold the same character as p */
int are_same (int x, int y, int z, char p) {
  int i = 0;
  if ((grid[x] == p) && (grid[y] == p) && (grid[z] == p))   i = 1; else  i = 0;
  return i;
}
