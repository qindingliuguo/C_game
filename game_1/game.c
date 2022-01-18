//
// Created by 13129 on 2022/1/13.
//
//测试三子棋游戏
#include "game.h"
void menu()
{
    printf("***********************************\n");
    printf("*******1. play  |  0. exit*********\n");
    printf("***********************************\n");
}
//游戏的实现
void gams()
{
    char red=0;
    //建立数组存放棋盘的走动信息
    char board[ROW][COL]={0};//全部存放空格
    //初始化棋盘
    Initboard(board,ROW,COL);
    //打印棋盘
    DisPlayBoard(board,ROW,COL);
    //下棋
    while (1)
    {
        //玩家先手
        PlayerMove(board,ROW,COL);
        DisPlayBoard(board,ROW,COL);
        //判断玩家输赢
        red=IsWin(board,ROW,COL);
        if(red!='C')
        {
            break;
        }
        //电脑后手
        ComputMove(board,ROW,COL);
        DisPlayBoard(board,ROW,COL);
        //判断电脑输赢
        red=IsWin(board,ROW,COL);
        if(red!='C')
        {
            break;
        }
    }
    if(red=='*')
    {
        printf("玩家赢\n");
    } else if(red=='#'){
        printf("电脑赢\n");
    } else{
        printf("平局\n");
    }
}
void test()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do {
        menu();
        printf("请选择->  ");
        fflush(stdout);
        scanf("%d",&input);
        switch (input) {
            case 1:
                gams();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("选择错误，重新选择");
                break;
        }
    } while (input);
}
int main()
{
    test();
    return 0;
}
