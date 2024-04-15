# include <stdio.h>
// //计算 学生卷面成绩
// int main()
// {
//     int g1,g2,grade;
//     printf("请输入卷面成绩和平时成绩:");//不能打负数
//     scanf("%d %d",&g1,&g2);
//     grade =(int)(g1*0.6 + g2*0.4);
//     printf("考试的结果为:%s, %d\n,", grade>=60?"不及格":"不及格",grade);
//     // 条件表达式 ? 表达式1 : 表达式2
//     // 如果条件表达式为真，则整个表达式的值为表达式1的值；如果条件表达式为假，则整个表达式的值为表达式2的值
//     return 0;
// }
//输入字符来将大写字母来换成小写字母
// int main()
// {
//     char ch;
//     printf("请输入一个字母");
//     scanf("%c", &ch);
//     ch = (ch>='A'&&ch<='z')?(ch + 32):ch;
//     //+32指的是将ACii码加上32就变成了小写字母了
//     printf("%c\n",ch);
//     return 0;
// }

//判断体重是否为超重或者太瘦
// int main()
// {
//     int weight,height;

//     printf("请输入你的身高(m)");
//     scanf("%f", &height);
//     printf("请输入你的体重(kg)");
//     scanf("%f", &weight);
//     if (height&&weight>0)
//     {
//         if(weight>height-110)
//         printf("你太重了请注意减肥\n");
//         else if(weight<height-110)
//         printf("体重偏瘦请注意健康\n");
//         else
//         printf("体重刚刚好\n");
//     }
//     else
//     printf("输入数值无效");
//     return 0;
// }
//二路选择结果
//判断年龄来确定是否适合就业的程序
// 
// int main()
// {
// const float B_PAY = 1000.0; //const在声明在程序的运行时无法被改变
// float sale,income;
// printf("请输入销售人员的销售额");
// scanf("%f", &sale);
// if(sale<0)
// {
//     printf("输入的数据非法，请输入有效数字");

// }
// if (sale < 1000)
// income = B_PAY;
// else if(sale < 5000)
// income = B_PAY + sale *(float)0.02;
// else if(sale<10000)
// income = B_PAY + sale *(float)0.03;
// else
// income = B_PAY +sale *(float)0.04;
// printf("本月工资为:%f",income);


// }
//将学生的成绩进行分级的程序
int main()
{
    int score;
    printf("请输入学生的成绩");
    scanf("d",& score);
    if(score<80)
      if(score<70)
         if(score<60)
         printf("不及格，返乡下耕田吧\n");
        else
        printf("D\n");
      else
     printf("C\n");
    
    else
    if(score<90)
    printf("B\n");
    else
    printf("A\n");

}

