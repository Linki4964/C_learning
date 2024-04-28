#include<stdio.h>
//一维数组的输入/输出
// int main()
// {
//     int a[5];
//     int i;
//     printf("请输入数值");
//     for(i = 0;i<5;i++)
//     scanf("%d",&a[i]);//想循环中依次输入数组中的a[0]~a[4]
//     for(i = 0;i<5;i++)
//     printf("%d",a[i]);//用控制数组输出
// printf("\n");
// }
//可以查找一维整数中部分元素的值
// int main()
// {
//     int i,x,y,n = 0,a[12] = {5,6,7,8,9,10,11,12,13,14,6,6};
//     printf("请查找需要寻找的数据类型");
//     scanf("%d%d",&x,&y);
//     if(x==y)    //如果相同那么就不做更换
//     {
//         printf("两个相同，数组仍然保持原样");
//         return 0;
//     }
//     for (i=0;i<12;i++) //反复检查数组
//     {
//        if(a[i]==x) //查找数组的数据
//        {
//         a[i]=y;   //修改数组数据，在这里替换
//         n++; //会用于自动计数
//     printf("%d\n",a[i]); 
//        } 
//        printf("%d\n",a[i]); //打印出这个数组里的所有数据,一次只打印一个数顺序按照a[n]的顺序
//     }
//     if(n>0) //如果存在这个数组那么至少n会大于一
//        printf("有%d个元素被置换\n",n);
//     else
//        printf("数组中没有找到%d\n",x);
    

// }

//计算两个整形的整型是否相同
// int main()
// #define N 6
// #define M 6 //创建宏定义，可以直接规定NM的长度为6
// {
//     int i,a[N] = {5,6,7,8,9,10}, b[M]={8,6,7,8,11,12};
//     if(N!=M)
//     {
//         printf("这两个数组不相等\n");
//         return 0;
//     }
//     for(i = 0;i<=5;i++){
//      if(a[i]!=b[i]){  //如果两个数组有不相等的就跳出循环，可以检验两个程序是否相等,
//      break;
//      }
//      if (i>5) //这个计数器只能标记是否相同，不能反应相同的数量
//      printf("这两个数组相等");
//      else
//      printf("这两个数组不相等\n");
//     }
//     printf("相同的数组为%d\n",i);
// }

 //二维函数的输入和输出
// int main()
// {
// int a [2][3];//先行后列
// int i,j;
// for(i=0;i<2;i++) {
//     for(j=0;j<3;j++) {
//         scanf("%d",&a[i][j]);
//     }
// }

// for(i=0;i<2;i++){
// for(j=0;j<3;j++){
//     printf("%d",a[i][j]);
//     printf("\n");
//   }
// }
// printf("\n");
// }
//这里可以寻找小于0的数据并且将其替换成0
// int main()
// {
//     float a[4][3] = {{20.0,-3.5,-6.0},{-10.0,2.2,50.0},{-9.1,71.0,-20.0},{3.0,8.0,-11.0}};
//     for(int i = 0;i<4;i++){
//         for(int j = 0;j<3;j++)
//         if(a[i][j]<0)
//         printf("%f",a[i][j]);
//         else{
//         printf("%f",0);
//         printf("\n");
//         }
//     }
// }
// 古诗词填空
// 
int main()
{
    int i,a[10];
    int n=0;
    printf("请依次输入数组的值\n");
    for(n=0,i=1;i<=10;i++,n++){
        scanf("%d",&a[n]);
    }
    printf("你输入的数组为");
    for(n=0;n<=9;n++){
        printf("%d ",a[n]);[]
    }
    printf("经过倒序处理的数据为：");
    for(n=9;n>=0;n--){
        printf("%d ",a[n]);
    }
    return 0;
}
//字符数组的引用
// int main(){
// char string[10]={'i',' ','a','m',' ','a','b','o','y'};
// int i;
// for(i=0;i<=10;i++){
// printf("%c",string[i]);
// printf("\n");
// }
// }

//古诗词填空小程序
// 
// int main() {
//     char a[] = "床前明月 \n";
//     char tmp[10]; // 定义一个足够大的数组来存储输入
//     printf("请对这个古诗词进行填空：\n");
//     printf("床前明月 ");
//     printf("请进行填空：");
//     scanf("%9s", tmp); // 限制输入的最大长度为9，避免溢出

//     // 将输入复制到字符串a的正确位置
//     if (tmp[0] != '\0') { // 只有当输入不为空时才进行复制
//         a[9] = tmp[0];
//     }
//     printf("%s", a);

//     return 0;
// }
//练习：矩阵
//以下的5X5的方阵，找出3个相邻的3个0元素
//输入一行最多包含80个字符的英文，统计其中大写小写数字空格和其他字符的数量

// int main(){
// int i,upper=0,lower=0,dight=0,space=0,other=0;
// char text[80];
// printf("请输入一行英文句子:\n");
// gets(text);
// for(i =0;text[i] != '\0';i++){
//     if(isupper(text[i])){
//     upper ++;
//     }
//     else if(islower(text[i])) {
//      lower++;
//     }
//     else if(isdigit(text[i])){
//     dight++;
//     }
//     else if(isspace(text[i]))
//     {
//    space++;
//     }
//     else{
//         other++;
//     }
    
// }
// printf("你输入的是:%s\n",text);
// printf("大写的数量为:%d\n",upper);
// printf("小写的数量为:%d\n",lower);
// printf("数字的数量为:%d\n",dight);
// printf("空格的数量为:%d\n",space);
// printf("其他的数量为%d\n",other);
    


// }


