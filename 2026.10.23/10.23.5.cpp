#include <iostream>
using namespace std;
int main(){
    //嗨嗨嗨，投机取巧！
    int a,n,out;
    cin>>a>>n;
    out = 0;
    for(int i = 1;i++;i<=n){
        out *= 10;
        out += i*a ;
    }
    cout << out;
    return 0;
}