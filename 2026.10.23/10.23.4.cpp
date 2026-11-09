#include <iostream>
using namespace std;
int narcissistic(long long int in){//你可能要问我怎么知道这玩意的英文，那当然是百度翻译啊，不然呢？ 
    long long int out = 0;  
    if(in == 0){
        cout << out;
    }
    while(in != 0){
        int temp = in % 10;
        in = in / 10;
        out = out * 10 +temp*temp*temp;
    }
    if(in == out){
        cout << out;
    }
    else{
    }
    //完了，跟上一题撞方法了，索性给上一题补个数组法好了
    return 0;
}
int main(){
    for(int i=100;i++;i<1000){
        narcissistic(i);
    }
}