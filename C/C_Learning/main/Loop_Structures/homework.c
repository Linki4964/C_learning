//作者：网工一班雷锦鸿
//本程序可以帮你快速计算鸡兔同笼问题并且会在你输入无效数值时进行提示并且中止程序
#include<stdio.h>
int main()
{
    int rabbit,chicken;
    int head,leg,total_leg;
    printf("请输入头的数量");
    scanf("%d",&head);
    if(head<0)
    {
        printf("输入的数值非法");
        return 1;
    }
    else 
    printf("请输入腿的数量");
    scanf("%d",&leg);
    if(leg % 2 == 1)
    {
        printf("你见过三只脚的兔子还是三只脚的鸡？？？？？");
        return 0;
    }
    else
   {
    for(chicken=1;total_leg!=leg;chicken++)
    {
        rabbit = head-chicken;
        total_leg =rabbit*4 + chicken*2;
        
    }
   }
   printf("雷锦鸿的电脑运行出的是：兔子的数量为%d,鸡的数量为%d",rabbit, chicken);
return 0;
}