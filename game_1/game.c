//
// Created by 13129 on 2022/1/13.
//
//������������Ϸ
#include "game.h"
void menu()
{
    printf("***********************************\n");
    printf("*******1. play  |  0. exit*********\n");
    printf("***********************************\n");
}
//��Ϸ��ʵ��
void gams()
{
    char red=0;
    //�������������̵��߶���Ϣ
    char board[ROW][COL]={0};//ȫ����ſո�
    //��ʼ������
    Initboard(board,ROW,COL);
    //��ӡ����
    DisPlayBoard(board,ROW,COL);
    //����
    while (1)
    {
        //�������
        PlayerMove(board,ROW,COL);
        DisPlayBoard(board,ROW,COL);
        //�ж������Ӯ
        red=IsWin(board,ROW,COL);
        if(red!='C')
        {
            break;
        }
        //���Ժ���
        ComputMove(board,ROW,COL);
        DisPlayBoard(board,ROW,COL);
        //�жϵ�����Ӯ
        red=IsWin(board,ROW,COL);
        if(red!='C')
        {
            break;
        }
    }
    if(red=='*')
    {
        printf("���Ӯ\n");
    } else if(red=='#'){
        printf("����Ӯ\n");
    } else{
        printf("ƽ��\n");
    }
}
void test()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do {
        menu();
        printf("��ѡ��->  ");
        fflush(stdout);
        scanf("%d",&input);
        switch (input) {
            case 1:
                gams();
                break;
            case 0:
                printf("�˳���Ϸ\n");
                break;
            default:
                printf("ѡ���������ѡ��");
                break;
        }
    } while (input);
}
int main()
{
    test();
    return 0;
}
