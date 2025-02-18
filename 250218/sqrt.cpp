#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double x = 1.025;
    cout << fixed << setprecision(2) << sqrt(pow(x, 3)) + 2 * sqrt(x) + 1;
}