#include "header.h"  /* Include the header (not strictly necessary here) */

/* Return true if grid positions x, y and z hold the same character as p */
int are_same (int x, int y, int z, char p) {
  int i = 0;
  if ((grid[x] == p) && (grid[y] == p) && (grid[z] == p))   i = 1; else  i = 0;
  return i;
}

int has_won(char p) {  /* true if player p has won game */
  int i = 0;
  i = (are_same(1, 2, 3, p) || are_same(4, 5, 6, p) ||
       are_same(7, 8, 9, p) || are_same(1, 4, 7, p) ||
       are_same(2, 5, 8, p) || are_same(3, 6, 9, p) ||
       are_same(1, 5, 9, p) || are_same(3, 5, 7, p));
    return i;
}
