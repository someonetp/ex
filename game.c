#include"game.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void intarr(char arr[ROWS][COLS],int rows,int cols,char a)//��ʼ�����̡�
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
	for(i=1;i<=row;i++)//�Լ����õĵ�һ�в���ӡ��Ҳ��������ĵ�0�����ꡣ
	{printf("%2d ",i);
		for(j=1;j<=col;j++)
	{printf("%c ",arr[i][j]);}//��ӡһ�е���Ϣiѭ��һ�Ρ�jѭ�� col�Ρ�
	printf("\n");}
}
void setmine(char arr[ROWS][COLS] ,int row,int col)
{int a=count;
while(a)
{int x=rand()%row+1;//������ ���� 1 -9 ��������ꡣ
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
{printf("�������׵�����:>");
scanf("%d%d",&x,&y);
if(x >=1&&x<=row&& y>=1&&y<=col)
{if(mine[x][y]=='1')//������Ԫ������
{printf("���ź��㱻ը����\n");
displayarr(mine,row,col);
break;}
else//������Ԫ�ز�����
{int a=get_mine_a(mine,x,y);
   show[x][y]=a+'0';
displayarr(show,row,col);
win++;
}}
else
{printf("����Ƿ�����������\n");}
}if(win==row*col-count)
	{printf("��ϲ��ɨ�׳ɹ�\n");
displayarr(mine,ROW,COL);}
}