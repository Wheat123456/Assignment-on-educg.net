/*
2. 实验08-2：计算学生信息中成绩的平均值

【问题描述】建立一个学生的结构记录，包含学号、姓名和成绩，输入整数n(n<=10)，再输入n个学时的基本信息，计算并输出他们的平均成绩。

【样例输入】

3
1 zhang 70
2 wang 80
3 qian 90

【样例输出】

80.00
*/
#include <iostream>

struct student{
    int id;
    char name[80];
    double mark;
};


int main(){
    int n;
    std::cin >> n;
    student stulist[n];
    for(int i = 0; i < n; i++){
        std::cin >> (stulist+i)->id >> (stulist+i)->name >> (stulist+i)->mark;
    }
    double avg = 0;
    for(int i = 0; i < n; i++){
        avg += (stulist+i)->mark;
    }
    avg /= n;
    printf("%.2lf\n", avg);
}