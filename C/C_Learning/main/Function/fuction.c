#include<stdio.h>
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
float area(int a,int b,int c);
int pb(int a,int b,int c);
main(){
     int i,a,b,c,seed;
     float mj;
     printf("Input an intuger(seed):");
     scanf("%d", &seed);
     for(i=0;i<10;i++)
     {
        a = rand()%50;
        b = rand()%50;
        c = rand()%50;
        mj = area(a,b,c);//计算出三角形的面积
        if(mj)
        printf("%d,%d,%d,mj = %.2f\n",a,b,c,mj);
     }
}
     float area(int a,int b,int c)
     {
        float s,m;
        if(pb(a,b,c)){
            s = (a+b+c)/2.0;
            m =sqrt(s*(s-a)*(s-b)*(s-c));//海伦公式可以计算出三角形的面积
            return(m);

        }
        else 
        return 0;
     }
     int pb(int a,int b,int c)
     {
        int t = 0;
        if(a+b>c&&a+c>b&&b+c>a)
        t=1;
        return 1;
     }

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

