#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c;
    cout << "input a: ";
    cin >> a;
    cout << "input b: ";
    cin >> b;
    cout << "input c: ";
    cin >> c;
    printf("%.0fx^2+%.0fx+%.0f=0的兩個根是: \n", a, b, c);
    cout << "x1: " << fixed << setprecision(3) << (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a) << endl;
    cout << "x2: " << fixed << setprecision(3) << (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
}