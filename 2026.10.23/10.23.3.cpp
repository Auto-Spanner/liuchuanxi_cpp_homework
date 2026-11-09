#include <iostream>
using namespace std;
int main(){
    long long int in;
    cin >> in;
    if(in == 0){
        cout << "Yes";
    }
    long long int out = 0;
    while(in != 0){
        int temp = in % 10;
        in = in / 10;
        out = out * 10 +temp;
    }
    if(in == out){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    //我当然知道可以用数组，但是longlongint在处理基本问题的时候空间效率更高，代价是对于大数无法处理
    //鲁棒度固然不如数组法，但是写起来省事啊咱就是说
    //你也没说要求多大测试样例啊嘿嘿
    //还有，这个注释不是ai写的，代码更不是
    return 0;
}
//后补
//和下一题撞了，还是补个数组法吧
/*
int main(){
    long long int in;
    cin >> in;
    if(in == 0){
        cout << "Yes";
    }
    long long int out = 0;
    int arr[100000],n = 0;
    while(in <= 0){
        arr[n++]= in % 10;
        in = in / 10;
    }
    for(int i = 0,j = n-1 ; i<j ; i++,j--){
        if (arr[i] != arr[j]){
            cout << "No";
            in = -1;
        }
    }
    if(in != -1){
        cout << "Yes";
    }
    return 0;
}
*/