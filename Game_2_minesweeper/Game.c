//
// Created by 13129 on 2022/1/16.
//
#include "Game.h"
void InitBoard(char board[ROWS][COLS],int rows,int cols,char set)
{
    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            board[i][j]= set;
        }
    }
}
void DisplayBoard(char board[ROWS][COLS],int row,int col)
{
    //��ӡ�к�
    for (int i = 0; i <= col; i++) {
        printf("%d  ",i);
    }
    printf("\n");
    for (int i = 1; i <= row; i++) {
        printf("%d  ",i);
        for (int j = 1; j <= col; j++) {
            printf("%c  ",board[i][j]);
        }
        printf("\n");
    }
}
void SetMine(char board[ROWS][COLS],int row,int col)
{
    int count = EASY_COUNT;
    while (count)
    {
        int x = rand()%row+1;//1-9
        int y = rand()%col+1;
        if(board[x][y]=='0') {
            board[x][y]='1';
            count--;
        }
    }
}
int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
    return mine[x-1][y]+
    mine[x-1][y-1]+
    mine[x][y-1]+
    mine[x+1][y-1]+
    mine[x+1][y]+
    mine[x+1][y+1]+
    mine[x][y+1]+
    mine[x-1][y+1]-8*'0';
}
void FineMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
    int x=0;
    int y=0;
    int win=0;
    while (win<row*col-EASY_COUNT)
    {
        printf("����������:>");
        fflush(stdout);
        scanf("%d%d",&x,&y);
        if(x>=1 && x<=row && y>=1 && y<=col) {
            //����Ϸ�
            //���1������
            if(mine[x][y]=='1')
            {
                printf("��Ϸ����\n");
                DisplayBoard(mine,row,col);
                break;
            } else{//���2.����
                //����x��y��Χ�м�����
                int count=get_mine_count(mine,x,y);
                show[x][y]=count+'0';
                DisplayBoard(show,row,col);
                win++;
            }
        } else{
            printf("���������������\n");
        }
    }
    if(win==row*col-EASY_COUNT)
    {
        printf("��ϲͨ��\n");
    }
}
