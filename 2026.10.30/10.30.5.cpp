#include <iostream>
using namespace std;

int getPower(int x, int y) {
    if (y < 0) return 0; 
    return x * getPower(x, y - 1);
}

double getPower(double x, int y) {
    if (y == 0) return 1.0;
    if (y > 0) return x * getPower(x, y - 1);
    return 1.0 / getPower(x, -y);
}

int main() {
    int a;
    double b;
    int m;

    cout << "请输入一个整数作为底数: ";
    cin >> a;
    cout << "请输入一个实数作为底数: ";
    cin >> b;
    cout << "请输入一个整数作为指数: ";
    cin >> m;

    cout << "整型版本 a^m: " << getPower(a, m) << endl;
    cout << "实型版本 b^m: " << getPower(b, m) << endl;

    if (m < 0) {
        cout << getPower(static_cast<double>(a), m) << endl;
    }

    return 0;
}