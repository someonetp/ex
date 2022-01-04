#define ROW 10
#define COL 10
#define ROWS ROW+2
#define COLS COL+2
#define count 99
void intarr(char arr[ROWS][COLS],int rows,int cols,char a);
void displayarr(char arr[ROWS][COLS],int row,int col);
void setmine(char arr[ROWS][COLS] ,int row,int col);
void findmine(char mine[ROWS][COLS],char show[ROWS][COLS] ,int row,int col);