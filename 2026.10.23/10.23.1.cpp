#include <iostream>
using namespace std;
int main() {
    int i = 0;
    int out = 0;
    cin >> i;
    if(i<=1000000){
        out = 0.1 * i;
    }
    else if(i<=2000000){
        out = 100000 + 0.75*(i-1000000);
    }
    else if(i<=4000000){
        out = 250000 + 0.5*(i-2000000);
    }
    else if(i<=6000000){
        out = 300000 + 0.3*(i-4000000);
    }
    else if(i<=10000000){
        out = 360000 + 0.15*(i-6000000);
    }
    else{
        out = 420000 + 0.1*(i-10000000);
    }
    //当然这题也是可以用switch的，毕竟只要是数值线性分类都可以用，顶多是函数拟合麻不麻烦的事，不过这个题真没必要，两个题用两种方法吧干脆
    cout << out;
    return 0;
}