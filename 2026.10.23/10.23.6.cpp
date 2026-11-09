#include <iostream>
using namespace std;
int main(){
    for(int i=1,j=1;j++;i<10){
        if(i<=j) cout<< i << "*"<< j<< "="<< i*j;
        if(j==9) {
            j=0;
            cout<<endl;
        }
    }
    return 0;
}