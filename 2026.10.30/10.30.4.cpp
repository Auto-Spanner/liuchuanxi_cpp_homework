#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "请输入要求解的 Fibonacci 级数项数 n: ";
    cin >> n;

    if (n <= 0) {
        cout << "请输入大于0的正整数。" << endl;
    } else {
        cout << "F(" << n << ") = " << fibonacci(n) << endl;

        cout << "前 " << n << " 项为: ";
        for (int i = 1; i <= n; ++i) {
            cout << fibonacci(i) << " ";
        }
        cout << endl;
    }

    return 0;
}