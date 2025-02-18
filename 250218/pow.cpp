#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    float a = 1.025;
    cout << fixed << setprecision(2) << pow(a, 6) + 5 * pow(a, 3) + 2 * a + 1;
}