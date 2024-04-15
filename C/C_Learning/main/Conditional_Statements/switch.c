#include<stdio.h>
//为每一个运动员的体重配置蛋白质和食物的配餐方案的程序
// 
int main()
{
    int c =8;
    switch(c<10?1:c<25?2:c<35?3:4)
    {
        case1: printf("%d℃有点冷\n",c);
        case2: printf("%d℃正合适\n",c);
        case3: printf("%d℃有点热\n",c);
        default:printf("%d℃太热了\n",c);
    }
    
}