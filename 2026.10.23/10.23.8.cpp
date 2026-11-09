#include <iostream>
using namespace std;
unsigned peach(unsigned int n){
    if(n>1){
        return peach(n-1)*2+2;
    }
    else{
        return 1;
    }
}
int main(){
    cout<<peach(10);
    return 0;
}