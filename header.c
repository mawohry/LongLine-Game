#include "header.h"  /* Include the header (not strictly necessary here) */

/* Return true if grid positions x, y and z hold the same character as p */
int are_same (int x, int y, int z, char p,char Board[]) {
  int i = 0;
  if ((Board[x] == p) && (Board[y] == p) && (Board[z] == p))   i = 1; else  i = 0;
  return i;
}

int has_won(char p, char Board[]) {  /* true if player p has won game */
  int i = 0;
  i = (are_same(1, 2, 3, p, Board) || are_same(4, 5, 6, p, Board) ||
       are_same(7, 8, 9, p, Board) || are_same(1, 4, 7, p, Board) ||
       are_same(2, 5, 8, p, Board) || are_same(3, 6, 9, p, Board) ||
       are_same(1, 5, 9, p, Board) || are_same(3, 5, 7, p, Board));
    return i;
}
void GetMoveCoordinates(int* Cell)
  {
    printf("\nEnter the cell (1-9) for your token: ");
    scanf("%i",&c);
 } 
void show_grid()
{
    int i;
    printf("\n+-----------+\n");
    printf("|");
    for(i= 1; i<=9; i++)
      {
          printf(" %c |",grid[i]);
          if(i%3==0)
          {
               printf("\n");
               printf("+-----------+\n");
               if(i<9)
               {
                  printf("|");
               }
          }   
      }
    return;
} 
