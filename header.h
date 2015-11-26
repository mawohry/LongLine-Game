#ifndef HEADER_H_   /* Include guard */
#define HEADER_H_

void DisplayBoard(char Board[]);
void ClearBoard(char Board[]);
void GetMoveCoordinates(int* Cell);
int CheckValidMove(int Cell, char Board[]);
int CheckXOrOHasWon(char Board[]);
char GetWhoStarts();

/* Return true if grid positions x, y and z hold the same character as p */
int are_same (int x, int y, int z, char p,char Board[]);

int has_won(char p, char Board[]);  /* true if player p has won game */
int play(char p);

#endif // HEADER_H_

