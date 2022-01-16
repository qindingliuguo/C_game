//
// Created by 13129 on 2021/10/19.
//
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()//创建菜单
{
    printf("######################\n");
    printf("####1.play 0.exit#####\n");
    printf("######################\n");
}
void game()//游戏内容
{
    int guess=0;
    int ret=0;
    ret=rand()%100+1;//生成随机数建议生成为1-100之间
    while (1)
    {
        printf("猜数字\n");
        fflush(stdout);
        scanf("%d",&guess);//输入数字
        if(guess>ret)
        {
            printf("猜大了\n");
        }
        else if(guess<ret)
        {
            printf("猜小了\n");
        }
        else
        {
            printf("猜对了\n");
            break;
        }

    }
}
int main()
{
    srand((unsigned int )time(NULL));//可以使rand每次生成的数不固定，生成起点设定一次就好，可以放在主函数内部让其只调用一次
    int input=0;
    do {
        menu();//先输出菜单
        printf("请选择：");
        fflush(stdout);
        scanf("%d",&input);//选择是否进入游戏
        switch (input)
        {
            case 1://进入游戏
                game();//
                break;
            case 0://退出游戏
                printf("退出游戏\n");
                break;
            default://选择错误
                printf("选择错误\n");
                break;
        }
    }while (input);//一直进行循环
    return 0;
}
