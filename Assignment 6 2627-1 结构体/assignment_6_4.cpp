/*
4. 实验08-4：有理数比较

【问题描述】编写函数CompareRational()，比较两个有理数的大学，该函数的参数为两个有理数（结构体类型，包含分子分母两个整数），若第一个有理数小于第二个，返回一个负数；若相等，返回0；若第一个有理数大于第二个，则返回正数。以分数的形式输入两个有理数，输出比较结果。

【输入形式】两个有理数，分数形式，格式为："分子/分母"

【输出形式】输入的两个有理数，中间用比较运算符连接表示其大小关系。有理数格式同上。

【样例输入】

1/2 3/4

【样例输出】

1/2<3/4
*/
#include <stdio.h>

struct rational_number{
    int nme, den;
};

int CompareRational(rational_number m, rational_number n){
    double val_m = (double)m.nme/m.den, val_n = (double)n.nme/n.den;
    if(val_m < val_n) return -1;
    if(val_m > val_n) return 1;
    return 0;
}

int main(){
    rational_number m, n;
    scanf("%d/%d %d/%d", &m.nme, &m.den, &n.nme, &n.den);
    int c = CompareRational(m, n);
    char s;
    if(c < 0) s = '<';
    else if(c > 0) s = '>';
    else s = '=';
    printf("%d/%d%c%d/%d\n", m.nme, m.den, s, n.nme, n.den);
}