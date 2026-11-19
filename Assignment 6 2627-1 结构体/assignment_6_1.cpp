/*
1. 实验08-1：时间换算

【问题描述】用结构体类型表示时间内容（时间以时分秒表示）输入一个时间数据，在输入一个秒数n(n<60)，以h:m:s的形式输出过了n秒后的时间。（超过24点以0点开始）

【输入形式】输入的时间必须是以"时:分:秒"格式输入

【输出形式】同样以格式"时:分:秒"输出

【样例输入】

11:59:40
30

【样例输出】

12:0:10
*/
#include <stdio.h>

struct time{
    int hour, min, sec;
};

int main(){
    int dt, thour, tmin, tsec;
    time t;
    scanf("%d:%d:%d", &thour, &tmin, &tsec);
    scanf("%d", &dt);
    t.sec = (tsec + dt)%60;
    t.min = (tmin + (tsec + dt)/60)%60;
    t.hour = (thour + (tmin + (tsec + dt)/60)/60)%24;
    printf("%d:%d:%d", t.hour, t.min, t.sec);
}
