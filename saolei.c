#include<stdio.h>
#include<math.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include"game.h"
void game()
{
static char mine[ROWS][COLS]={ 0 };//自己看的
static char show[ROWS][COLS]={ 0 };//给玩家看的。
intarr(mine,ROWS,COLS,'0');//初始化，
intarr(show,ROWS,COLS,'*');//初始化
displayarr(mine,ROW,COL);//打印棋盘
displayarr(show,ROW,COL);//打印棋盘
//布置雷
setmine(mine,ROW,COL);
displayarr(mine,ROW,COL);
findmine(mine,show,ROW,COL);
}
void menu()
{ printf("**********************\n");
  printf("*** 1.play 0.over ****\n");
  printf("**********************\n");
}
void test()
{int input=0;
srand((unsigned int)time(NULL));
do
{menu();
printf("请输入是否进入游戏\n");
scanf("%d",&input);
switch(input)
{
    case 1:
     game();
    break;
    case 0:
	printf("欢迎下次使用\n");
	break;
default:
	printf("输入错误，请重新输入\n");
	break;}
}while(input);}
int main()
{test();
return 0;}