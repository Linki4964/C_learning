//这是一个可以计算10以内素数的程序
//作者：雷锦鸿 //班级：网工一班
//本程序使用了函数和数组进行筛选质数，如果使用传统的循环去计算将会是一项是否困难而且混乱的工程，所以在这里使用函数，以使界面更加简洁，
//易懂
#include<stdio.h>
int runoob1(int num){
    if(num <=1){
        return 0;//排除1和负数的可能
    }
    for(int i = 2;i <= num/2;i++){   
        if(num % i == 0){  
            return 0;       
        }
    }
    return 1; //计算这个数能否被1和自身以外的数整除
}
//输入判断是否为整数
int runoob2(float num){
    return (num == (int)num); //返回数据类型
}


int main(){

    int num;
    printf("请输入一个大于0的数字"); 
    scanf("%d",&num);
    printf("从%d到0之间的质数有:\n",  num);
    if(!runoob2(num)|| num <= 0){
    printf("请输入一个大于0的整数");
    return 1;
    }
      for (int i =num; i >= 2; i--){
    if(runoob1(i)){
        printf("%d ",i);
    }
      }
    printf("\n");
    return 0;


}