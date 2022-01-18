//
// Created by 13129 on 2022/1/16.
//
#include "Game.h"
void meun()
{
    printf("############################\n");
    printf("##########1 . Play###########\n");
    printf("##########0 . Exit##########\n");
    printf("############################\n");
}
void game()
{
    //雷的信息存储
    //1. 布置好雷的信息
    char mine[ROWS][COLS]={0};//11*11
    //2. 排查出雷的信息
    char show[ROWS][COLS]={0};
    //初始化
    InitBoard(mine,ROWS,COLS,'0');
    InitBoard(show,ROWS,COLS,'*');
    //打印棋盘
    //DisplayBoard(mine,ROW,COL);
    DisplayBoard(show,ROW,COL);
    //布置雷
    SetMine(mine,ROW,COL);
    DisplayBoard(mine,ROW,COL);
    //扫雷
    FineMine(mine,show,ROW,COL);
    void open_mine(int x, int y);
}
void test()
{
    int input=0;
    srand((unsigned int)time(NULL));

    do {
        meun();
        printf("请选择:>  ");
        fflush(stdout);
        scanf("%d",&input);
        switch (input) {
            case 1:
                game();
                break;
            case 0:
                printf("游戏结束");
                break;
            default:
                printf("选择错误，重新选择");
        }
    } while (input);
}
int main()
{
    test();
    return 0;
}
