#include <iostream>
#include <cmath>
using namespace std;

// 函数定义：判断是否为质数
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    // 只需要判断到根号n即可
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cin >> num;

    if (isPrime(num)) {
        cout << num << "是质数" << endl;
    } else {
        cout << num << "不是质数" << endl;
    }

    return 0;
}