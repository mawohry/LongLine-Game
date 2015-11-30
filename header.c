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

void play_human(char p) {  /* human player's turn */
   int pos = 0;
  printf("\nPlayer %c: Give grid position (1-9) for your token: ", p);
  do{
    scanf("%d", &pos);
    if ((pos < 1) || (9 < pos)) 
      printf("\nSORRY: Position %1d is invalid; please give number in rage 1 - 9: ", pos);
    else if (grid[pos] != BLANK)
      {printf("\nSORRY: Position %1d is occupied; please another position: ", pos);  pos = 10;}
    else {
      grid[pos] = p;/* mark cell with letter of p */
      --grid_blanks;/* decrement count of blank cells */
    }
    fflush(stdout);
  }while ((pos < 1) || (9 < pos));
return;
}

/* machine player's turn */
void play_machine(char p) {
  int pos = 0;
  if (grid_blanks <= 0) {
    printf("\nUNEXPECTED PROBLEM: no free grid cell; player turn ignored\n"); 
    fflush(stdout);
    return; /* no grid cell available to use; return */
  }
  printf("\nPlayer %c: Give grid position (1-9) for your token: ", p);  fflush(stdout);
  do {
    grid_rand = rand();//pos + (grid_rand % 443); /* generate a random no */
    pos = (grid_rand % 9) + 1;/* ensure in range 1 - 9 */
    //printf("\n%d",pos);
  } while (((pos < 1) || (9 < pos)) || (grid[pos] != BLANK));
  printf("%1d\n", pos); /* display position selected */
  grid[pos] = p; /* mark cell with letter of p */
  --grid_blanks; /* decrement count of blank cells */
  return ;
}
