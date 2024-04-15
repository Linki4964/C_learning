#include <stdio.h>
//计算1~100的整数和
// int main()
// {
//     int i,sum=0;
//     for(i = 1;i<=100;i+=2)
//     {
//         sum+= i;
//     }
// printf("总和等于=%d\n",sum);
// }
// 连续输入五名学生的成绩
// int main()
// {
//     int i;
//     float score,max=0.0, sum=0.0;
// for(i=1;i<=5;i++)
// {
//     printf("请输入第%d名学生的成绩",i);
//     scanf("%f",&score);
//     if(max>score);
//     max=score;
//     sum+=score;
// }
//     printf("最高分是%f,总分是%f",max,sum);
// }
//在键盘上输入一个大于2的整数，判断n是否为素数
// int main()
// {
//     int n,m,i,flag=0;
//     printf("请输入一个整数");
//     scanf("%d",&n);
//     m = sqrt(n)
// }
// while 从1加到100
// int main()
// {
//     int i = 1,sum =0;
//     while (i<=100)
//     {
//     sum+=i;
//     i++;
//     }
// printf("结果是%d",sum);
// }

//do while 循环
// int main()
// {
//     int x;
//     printf("请输入x的值");
//     scanf("%d",&x);
//     do
//     {
//         printf("%d",x%10);
//         x=x/10;
//     } while (x!=0);
//     return 0;
    

// }
//4.1.5实战演练(2)
// int main()
// {
//     int month = 20;
//     int i= 0;
//     printf("第一月1对");
//     printf("第二月1对");
//     for(i=3;i<month;i++)
//     {
//         i=i-1+i-2;
//         printf("兔子的数量为%d\n",i);
//     }
    
//     }
// 
// int main()
// {
//     int month =20;
//     int fn;
//     int n;
// int f1 = 1, f2 = 1;
// printf("第一个月为%d",f1);
// printf("第二个月为%d",f2);
// for(n=3,fn=1;n<=month;fn++,n++)
// {
    
//     fn = f1+f2;
//     f1 = f2;
//     f2 =fn;
//     printf("第%d月的兔子数量为%d\n",n,fn);
    
// }
// 计算鸡兔同笼问题
int main()
{
    int rabbit,chicken;
    int head,leg,total_leg;
    printf("请输入头的数量");
    scanf("%d",&head);
    printf("请输入腿的数量");
    scanf("%d",&leg);
    for(chicken=1;total_leg!=leg;chicken++)
    {
        rabbit = head-chicken;
        total_leg =rabbit*4 + chicken*2;
        
    }
   printf("兔子的数量为:%d,鸡的数量为:%d",rabbit, chicken);
return 0;
}