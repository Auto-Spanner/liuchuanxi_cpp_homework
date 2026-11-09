#include <iostream>
using namespace std;

short int divideTwoNumbers(unsigned short int a, unsigned short int b) {
    if (b == 0) {
        return -1; // 除数为0，返回-1
    }
    return a / b;
}

int main() {
    unsigned short int num1, num2;
    cin >> num1 >> num2;

    short int result = divideTwoNumbers(num1, num2);

    if (result == -1) {
        cout << "错误：第二个参数不能为0！" << endl;
    } else {
        cout << num1 << " / " << num2 << " = " << result << endl;
    }

    return 0;
}