#include <iostream>

int Ack(int m, int n){
    if(m == 0) return n + 1;
    if(n == 0 && m > 0) return Ack(m-1, 1);
    if(n > 0 && m > 0) return Ack(m-1, Ack(m, n-1));
    return 0;
}

int main(){
    int m, n;
    std::cin >> m >> n;
    std::cout << "Ack(" << m << "," << n << ")=" << Ack(m,n) << std::endl;
}