#include <iostream>
using namespace std;
unsigned rabbit(unsigned int n){
    if(n>2){
        return rabbit(n-1)+rabbit(n-2);
    }
    else{
        return 1;
    }
}
int main(){
    cout<<rabbit(20/3);
    return 0;
}