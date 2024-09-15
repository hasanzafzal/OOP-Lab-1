#include <iostream>
#include <cmath>
using namespace std;

int cubeRoot(int x) {
    return pow(x, 1 / 3);
}

double cubeRoot(double x) {
    return pow(x, 1 / 3);
}

int main() {
    int x;
    double y;
    cout << "Enter an integer: ";
    cin >> x;
    cout << "Integer cuberoot: " << cubeRoot(x) << endl;
    cout << "Enter a double: ";
    cin >> y;
    cout << "Double root:" << cubeRoot(y) << endl;
    return 0;
}