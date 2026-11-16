/*
1. 实验07-5：寻找最长的字符串

【问题描述】输入5个字符串，输出其中最长的字符串。通过输入函数scanf("%s",sx)的形式输入字符串。
【输入形式】

li wang zhang jin xian

【输出形式】

zhang
*/

#include <stdio.h>

int main(){
    char s1[80], s2[80], s3[80], s4[80], s5[80];
    scanf("%s",s1);
    scanf("%s",s2);
    scanf("%s",s3);
    scanf("%s",s4);
    scanf("%s",s5);
    char *lgt = s1;
    int l0 = 0, l1, i;
    while(*(s1+l0) != '\0'){
        l0++;
    }
    l1 = 0;
    while(*(s2+l1) != '\0'){
        l1++;
    }
    if(l1 > l0){
        l0 = l1;
        lgt = s2;
    }
    l1 = 0;
    while(*(s3+l1) != '\0'){
        l1++;
    }
    if(l1 > l0){
        l0 = l1;
        lgt = s3;
    }
    l1 = 0;
    while(*(s4+l1) != '\0'){
        l1++;
    }
    if(l1 > l0){
        l0 = l1;
        lgt = s4;
    }
    l1 = 0;
    while(*(s5+l1) != '\0'){
        l1++;
    }
    if(l1 > l0){
        l0 = l1;
        lgt = s5;
    }
    for(i = 0; i < l0; i++){
        putchar(*(lgt + i));
    }
    putchar('\n');
}