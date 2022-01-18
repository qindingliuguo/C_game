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
    //打印列号
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
        printf("请输入坐标:>");
        fflush(stdout);
        scanf("%d%d",&x,&y);
        if(x>=1 && x<=row && y>=1 && y<=col) {
            //坐标合法
            //情况1，踩雷
            if(mine[x][y]=='1')
            {
                printf("游戏结束\n");
                DisplayBoard(mine,row,col);
                break;
            } else{//情况2.非雷
                //计算x，y周围有几个雷
                int count=get_mine_count(mine,x,y);
                show[x][y]=count+'0';
                DisplayBoard(show,row,col);
                win++;
            }
        } else{
            printf("坐标错误，重新输入\n");
        }
    }
    if(win==row*col-EASY_COUNT)
    {
        printf("恭喜通关\n");
    }
}
