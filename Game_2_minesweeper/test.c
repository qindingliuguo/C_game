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
    //�׵���Ϣ�洢
    //1. ���ú��׵���Ϣ
    char mine[ROWS][COLS]={0};//11*11
    //2. �Ų���׵���Ϣ
    char show[ROWS][COLS]={0};
    //��ʼ��
    InitBoard(mine,ROWS,COLS,'0');
    InitBoard(show,ROWS,COLS,'*');
    //��ӡ����
    //DisplayBoard(mine,ROW,COL);
    DisplayBoard(show,ROW,COL);
    //������
    SetMine(mine,ROW,COL);
    DisplayBoard(mine,ROW,COL);
    //ɨ��
    FineMine(mine,show,ROW,COL);
    void open_mine(int x, int y);
}
void test()
{
    int input=0;
    srand((unsigned int)time(NULL));

    do {
        meun();
        printf("��ѡ��:>  ");
        fflush(stdout);
        scanf("%d",&input);
        switch (input) {
            case 1:
                game();
                break;
            case 0:
                printf("��Ϸ����");
                break;
            default:
                printf("ѡ���������ѡ��");
        }
    } while (input);
}
int main()
{
    test();
    return 0;
}
