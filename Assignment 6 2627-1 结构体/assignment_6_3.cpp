/*
3. 实验08-3：从书籍结构体中查找定价最高的书籍

【问题描述】从键盘输入n(n<=10)，本书的名称和定价并存入结构体数组中，从中查找定价最高的和最低的数的名称及定价，并输出，价格输出保留2位小数。

【样例输入】

3
Programming_in_c 21.5
Programming_in_VB 18.5
Programming_in_Delphi 25.0

【样例输出】

18.50,Programming_in_VB
25.00,Programming_in_Delphi
*/
#include <iostream>

struct book{
    char name[80];
    double price;
};

int main(){
    int n;
    std::cin >> n;
    book bkls[n];
    for(int i = 0; i < n; i++){
        std::cin >> (bkls+i)->name >> (bkls+i)->price;
    }
    int max = 0, min = 0;
    for(int i = 0; i < n; i++){
        if((bkls+i)->price > (bkls+max)->price) max = i;
        if((bkls+i)->price < (bkls+min)->price) min = i;
    }
    printf("%.2lf,%s\n", (bkls+min)->price, (bkls+min)->name);
    printf("%.2lf,%s\n", (bkls+max)->price, (bkls+max)->name);
}