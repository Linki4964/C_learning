#include<stdio.h>
#include <string.h>
//计算3！+5！+8！
// int main()
// {
//     long int j,i,t=1,s=0;
//     for(j=1;j<=3;j++)t=t*j;
//     s+=t;//计算3的阶乘
//     for(t=1,j=1;j<=8;j++)t=t*j;
//     s+=t;//计算5的阶乘
//     for(t=1,j=1;j<=8;j++)t=t*j;
//     s+=t;//计算8的阶乘
//     printf("3!+5!+8!= %1d\n",s);
//     }
//可以计算函数的若干个阶乘

// long fact(int n)
// {
//     long t = 1;
//     int j;
//     for(j=1;j<=n;j++)
//     t*=j;
//     return t;
// }
// main()
// {
//     long s = 0;
//     s = fact(3)+fact(5)+fact(8);
//     printf("3!+5!+8!=%1d\n",s);
// }
//计算1~10的阶乘
// 

//一个可以返回绝对值的函数定义
// 

//函数的参数传递
//有10个同学的某科考试成绩存入数组s，求他们的平均分，并对成绩由高到低排序
// void sort(int s[],int n){//定义排序函数
//   int j,t,k;
//   for(j=0;j<n-1;j++){
//      for(k = j+1;k<n;k++)
//         if(s[j]<s[k]){
//             t=s[j];
//             s[j]=s[k];
//             s[k]=t;
//         }
//   }
// }
//  float average(int s[],int n){//定义求平均数的函数
//     int i,pj=0;
//     for(i=0; i<n; i++){
//     pj = pj + s[i];
//     }
//     return ((float)pj/n);
    
//     }
// int main(){
//         int j,a[]={60,70,89,90,100,67,99,76,88};
//         sort(a,9);
//         for(j=0;j<9;j++){
//          printf("%d ",a[j]);
//         }
//          printf("平均分 =%f",average(a,9));

//     }
// 函数的参数传递
// 

//计算三角形的面积
// float area(int a,int b,int c);
// int pb(int a,int b,int c);
// main(){
//      int i,a,b,c,seed;
//      float mj;
//      printf("Input an intuger(seed):");
//      scanf("%d", &seed);
//      for(i=0;i<10;i++)
//      {
//         a = rand()%50;
//         b = rand()%50;
//         c = rand()%50;
//         mj = area(a,b,c);//计算出三角形的面积
//         if(mj)
//         printf("%d,%d,%d,mj = %.2f\n",a,b,c,mj);
//      }
// }
//      float area(int a,int b,int c)
//      {
//         float s,m;
//         if(pb(a,b,c)){
//             s = (a+b+c)/2.0;
//             m =sqrt(s*(s-a)*(s-b)*(s-c));//海伦公式可以计算出三角形的面积
//             return(m);

//         }
//         else 
//         return 0;
//      }
//      int pb(int a,int b,int c)
//      {
//         int t = 0;
//         if(a+b>c&&a+c>b&&b+c>a)
//         t=1;
//         return 1;
//      }

//嵌套调用
// int f11(int a,int b){
//     int c;
//     c = a*b%3;
//     return c;
// }
// int f1(int a,int b){
//     int c;
//     a+=a;//相当于a+a 
//     b+=b;
//     c=f11(a,b);//嵌套调用f11的函数
//     return c*c;
// }
// main(){
//     int x =11,y =19;
//     printf("%d\n",f1(x,y));
// }

//递归调用
// float f;
// float ff(int n){
//     if(n<0) printf("n<0 data error!");//递归的终点
//     else if(n == 0|n == 1)
//     f = 1;
//     else 
//     f = ff(n-1) *n;//在这里嵌套使用了自己递归的调用
//     return f;
// }
// void main(){
// int n;
// float y;
// printf("Input an integer number");
// scanf("%d",&n);
// y = ff(n);
// scanf("%d",&n);
// y = ff(n);
// printf("%d!=%.0f",n,y);
// }

//计算三角形的面积

// float area(int i,int b,int c);
// int pb(int a,int b,int c);
// main()
// {
//     int i,a,b,c;
//     float mj;
//     printf("请输入三角形的边长");
//     scanf("%d %d %d",&a,&b,&c);   //要输入一个三角形的边长 
//         mj = area(a,b,c);
//         if(mj == 0){
//         printf("输入的数值不合法请输入正确的数值");
//         }
//         else
//         printf("面积是:%.2f\n",mj);
// }

// float area(int a,int b,int c){ //这个是面积的公式
//     float s,m;                
//     if(pb(a,b,c))     //嵌套使用
//     {
//         s = (a+b+c)/2.0;
//         m = sqrt(s*(s-a)*(s-b)*(s-c));
//         return(m);
//     }
//     else 
//     return 0;    
//     }
   
//     int pb(int a,int b,int c){ //判断输入的数值是否合法
//         int t=0;
//         if (a + b > c && a + c > b && b + c > a){
//     t = 1;
// }
//         return t;S
//            }

// 这是一个本地群发消息的装置
// 定义全局变量
// char messagepool[100][200];    //定义群发的消息池，负责保存消息池的消息
// //消息池的总数，每条消息<200个字符

// int num = 0;   //目前消息的数量
// int p = 0;     //待更新消息的数量
// void push(){
//     char str[200];  //发布消息的数量
//     if(num>100)     //局部变量定义，申操作变量
//        printf("消息已满!\n"); 
//     else 
//        num++;
//     printf("消息>>");
//     scanf("%s",str);     //输入要发布的消息
//     strncpy(messagepool[p],str,200);  //保存信息到消息池
//     p = ++p % 100;
// }
// void display()
// {
//     printf("------消息池------\n");
//     for(int i=0;i<num;i++)
//     puts(messagepool[i]);     //将消息池里面的消息输出
//     printf("————————\n");
// }
// int main()
// {
//     int cmm;     //定义局部变量定义数量
//     printf("命令 = [发布信息输入1]|[显示消息输入2]|[退出输入3]\n");
//     while (cmm!=3)  //控制程序在输入3的时候退出程序
//     {
//         printf("命令>>>");
//         scanf("%d",&cmm);
//         switch(cmm)
//         {
//             case 1:
//                 push();break;
//             case 2:
//                 display();break;
//         }
//     }
// }

// #define X 5            //用X表示5
// #define Y X +1        //用X 表示x+1(嵌套使用)
// #define Z Y * X/2     //用Z表示 Y * X/2(嵌套定义)
// #include "stdio.h"
// main()
// {
//     int a = Y;        //替换为int a = 5+1
//     printf("%d,",Z);     //Z替换为5+1*5/2
//     printf("%d\n", --a);

// }

//快速计算（编译预处理）

//诗词十二宫格游戏

void inputPri(char prioer[3][8])
{
    int row;
    char tmp[3];
    printf("输入汉字\n");
    for(row = 0;row<3;row++)
    {
        printf("请输入第%d行",row);
        gets(prioer[row]);
    }
}
bool pick(char prioer[3][8],char tmp[3],int row,int col)
{
    
    if(row >= 0&&row<3&&row&&col >=0&&col<4)
    {
        col = 2*col;
        tmp[0] = prioer[row][col++];
        tmp[1] = prioer[row][col];
        tmp[2] = '\0';
        return 1;
    }
    else
        return 0;
}
void outputPri(char sentence[])
{
    printf("你挑选的诗句是：\n");
    puts(sentence);
}
int main()
{
    char p[3][8],s[25],tmp[3];
    int i,m,n,r,c;
    inputPri(p);
    printf("挑选要输入的汉字个数：");
    scanf("%d",&n);
    printf("挑选的汉字所在的行和列：");
    i = 0;
    m = 0;
    while (i<n){
    printf("行和列：");
    scanf("%d%d",&r,&c);
    if(pick(p,tmp,r,c))
    {
        m = i*2;
        s[m++] = tmp[0];
        s[m++] = tmp[1];
    }
    i++;
    }
    s[m] = '\0';
    outputPri(s);
    return 0;
}
//gpt的版本也有问题
#include <stdio.h>

void inputPri(char prioer[3][8]) {
    int row;
    char tmp[10]; // 使用一个足够大的缓冲区来读取输入
    printf("输入汉字\n");
    for (row = 0; row < 3; row++) {
        printf("请输入第%d行: ", row);
        fgets(tmp, sizeof(tmp), stdin); // 使用 fgets 来安全地读取输入
        sscanf(tmp, "%s", prioer[row]); // 使用 sscanf 来读取输入
    }
}

_Bool pick(char prioer[3][8], char tmp[3], int row, int col) {
    if (row >= 0 && row < 3 && col >= 0 && col < 4) {
        col = 2 * col;
        tmp[0] = prioer[row][col++];
        tmp[1] = prioer[row][col];
        tmp[2] = '\0';
        return 1;
    } else {
        return 0;
    }
}

void outputPri(char sentence[]) {
    printf("你挑选的诗句是：\n");
    puts(sentence);
}

int main() {
    char p[3][8], s[25], tmp[3];
    int i, m, n, r, c;
    inputPri(p);
    printf("挑选要输入的汉字个数：");
    scanf("%d", &n);
    printf("挑选的汉字所在的行和列：\n");
    i = 0;
    m = 0;
    while (i < n) {
        printf("行和列：");
        scanf("%d%d", &r, &c);
        if (pick(p, tmp, r, c)) {
            m = i * 2;
            s[m++] = tmp[0];
            s[m++] = tmp[1];
            i++; // 在成功挑选一个汉字后增加计数器的值
        } else {
            printf("输入的行或列不合法，请重新输入。\n");
        }
    }
    s[m] = '\0';
    outputPri(s);
    return 0;
}
