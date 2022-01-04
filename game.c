#include"game.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void intarr(char arr[ROWS][COLS],int rows,int cols,char a)//初始化棋盘。
{int i=0;
int j=0;
for(i=0;i<=rows;i++)
{for(j=0;j<=cols;j++)
  arr[i][j]=a;
}}
void displayarr(char arr[ROWS][COLS],int row,int col)
{int i=0;
	int j=0;
	for(i=0;i<=col;i++)
	{printf(" %d",i);}
	printf("\n");
	for(i=1;i<=row;i++)//自己设置的第一行不打印，也就是数组的第0行坐标。
	{printf("%2d ",i);
		for(j=1;j<=col;j++)
	{printf("%c ",arr[i][j]);}//打印一行的信息i循环一次。j循环 col次。
	printf("\n");}
}
void setmine(char arr[ROWS][COLS] ,int row,int col)
{int a=count;
while(a)
{int x=rand()%row+1;//布置雷 产生 1 -9 的随机坐标。
int y=rand()%col+1;
if(arr[x][y]=='0')
{arr[x][y]='1';
a--;
}}}
int get_mine_a(char mine[ROWS][COLS],int x,int y)
{ return mine[x-1][y]+mine[x-1][y-1]+mine[x][y-1]+mine[x+1][y-1]+
		mine[x+1][y]+mine[x+1][y+1]+mine[x][y+1]+mine[x-1][y+1]-8*'0';}
void findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{int x=0;
int y=0;
int win=0;
while(win<row*col-count)
{printf("请输入雷的坐标:>");
scanf("%d%d",&x,&y);
if(x >=1&&x<=row&& y>=1&&y<=col)
{if(mine[x][y]=='1')//如果这个元素是雷
{printf("很遗憾你被炸死了\n");
displayarr(mine,row,col);
break;}
else//如果这个元素不是雷
{int a=get_mine_a(mine,x,y);
   show[x][y]=a+'0';
displayarr(show,row,col);
win++;
}}
else
{printf("输入非法请重新输入\n");}
}if(win==row*col-count)
	{printf("恭喜你扫雷成功\n");
displayarr(mine,ROW,COL);}
}