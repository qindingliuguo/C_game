//
// Created by 13129 on 2021/10/19.
//
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()//�����˵�
{
    printf("######################\n");
    printf("####1.play 0.exit#####\n");
    printf("######################\n");
}
void game()//��Ϸ����
{
    int guess=0;
    int ret=0;
    ret=rand()%100+1;//�����������������Ϊ1-100֮��
    while (1)
    {
        printf("������\n");
        fflush(stdout);
        scanf("%d",&guess);//��������
        if(guess>ret)
        {
            printf("�´���\n");
        }
        else if(guess<ret)
        {
            printf("��С��\n");
        }
        else
        {
            printf("�¶���\n");
            break;
        }

    }
}
int main()
{
    srand((unsigned int )time(NULL));//����ʹrandÿ�����ɵ������̶�����������趨һ�ξͺã����Է����������ڲ�����ֻ����һ��
    int input=0;
    do {
        menu();//������˵�
        printf("��ѡ��");
        fflush(stdout);
        scanf("%d",&input);//ѡ���Ƿ������Ϸ
        switch (input)
        {
            case 1://������Ϸ
                game();//
                break;
            case 0://�˳���Ϸ
                printf("�˳���Ϸ\n");
                break;
            default://ѡ�����
                printf("ѡ�����\n");
                break;
        }
    }while (input);//һֱ����ѭ��
    return 0;
}
