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
//     //+32指的是将ACII码加上32就变成了小写字母了
//     printf("%c\n",ch);
//     return 0;
// }

//判断体重是否为超重或者太瘦
int main()
{
    int weight,height;
    printf("请输入你的标准体重");
    scanf("%f", &height);
    weight = height - 110;
    
    if("weight>5"){
    printf("你的体重超重");
    }
    else
    printf("你的体重正常");

    return 0;
}

