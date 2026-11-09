// 作业 7 2627-1 递归函数 程序片段编程题

// 1. 实验09-4：递归实现整数的顺序、逆序输出

// 将整数 n 按位顺序输出
void posi(int n){
    void posi1(int n, int l);
    if(n == 0) return;
    int l = 0;
    int t = 1;
    while(n/(10*t) >= 1){
        t *= 10;
        l++;
    }
    putchar(n/t + 48);
    putchar(' ');
    posi1(n%t, l);
}
void posi1(int n, int l){
    if(l <= 0) return;
    int t = 1, i;
    for(i = 1; i < l; i++){
        t*=10;
    }
    putchar(n/t + 48);
    putchar(' ');
    posi1(n%t, l - 1);
}

// 将整数 n 按位逆序输出

void nega(int n){
    if(n == 0) return;
    putchar(n%10 + 48);
    putchar(' ');
    nega(n/10);
}

// 2. 实验09-1：用递归求阶乘的和
// 题目要求用 double 类型，我偏不，我就用 long long

// 计算n!
long long fact(int n){
    if(n == 0) return 1;
    else return n*fact(n-1);
}

// 3. 实验09-3：十进制转二进制

// 输出 n 的二进制
void dectobin(int n){
    char sb[32];
    int i, p = 0;
    for(i = 31; i > -1; i--){
        sb[i] = n%2 + 48;
        n /= 2;
    }
    for(i = 0; i < 32; i++){
        if(sb[i] == '0' && p) putchar(sb[i]);
        else if(sb[i] == '1'){
            putchar(sb[i]);
            p = 1;
        }
    }
}