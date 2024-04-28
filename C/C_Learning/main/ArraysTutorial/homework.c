#include<stdio.h>

int main(){

char text[81];
char temp[81];
int length=0;
int i;
    printf("请输入你想要输入的句子\n");
    scanf("%s",text);
for(i=0;text[i] != '\0';i++){
 temp[i]=text[i];
 length++;
}
temp[i] = '\0';
printf("你之前输入的句子是:%s\n",text);
printf("复制得到的句子:%s\n",temp);
printf("你的句子长度是%d",length);
}