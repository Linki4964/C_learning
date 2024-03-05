#include <stdio.h>

int main() {
    int num1, num2, product;
    
    printf("请输入两个整数：\n");
    scanf("%d %d", &num1, &num2);
    
    product = num1 * num2;
    
    printf("这两个数的乘积是：%d\n", product);
    
    return 0;
}
