#include <iostream>
using namespace std;


int getGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int getLCM(int a, int b) {
    return (a * b) / getGCD(a, b);
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    int gcd = getGCD(num1, num2);
    int lcm = getLCM(num1, num2);

    cout << num1 << "和" << num2 << "的最大公约数是: " << gcd << endl;
    cout << num1 << "和" << num2 << "的最小公倍数是: " << lcm << endl;

    return 0;
}