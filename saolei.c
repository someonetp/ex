#include<stdio.h>
#include<math.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include"game.h"
void game()
{
static char mine[ROWS][COLS]={ 0 };//�Լ�����
static char show[ROWS][COLS]={ 0 };//����ҿ��ġ�
intarr(mine,ROWS,COLS,'0');//��ʼ����
intarr(show,ROWS,COLS,'*');//��ʼ��
displayarr(mine,ROW,COL);//��ӡ����
displayarr(show,ROW,COL);//��ӡ����
//������
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
printf("�������Ƿ������Ϸ\n");
scanf("%d",&input);
switch(input)
{
    case 1:
     game();
    break;
    case 0:
	printf("��ӭ�´�ʹ��\n");
	break;
default:
	printf("�����������������\n");
	break;}
}while(input);}
int main()
{test();
return 0;}