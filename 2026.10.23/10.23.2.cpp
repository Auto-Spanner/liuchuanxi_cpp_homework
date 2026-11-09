#include <iostream>
using namespace std;
int main(){
    int score;
    cin >> score;
    cout << "你认为电影";
    switch((score+1)/2){//整除尴尬地需要向上取整
        case 5:
            cout<<"经典";
            break;
        case 4:
            cout<<"非常好";
            break;        
        case 3:
            cout<<"一般";
            break;
        default:
            cout<<"烂片";
            break;
    }
    return 0;
}