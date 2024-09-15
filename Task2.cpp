#include <iostream>
#include <cmath>
using namespace std;

int add(int x, int y) {
	return x + y;
}

double add(double x, double y) {
	return x + y;
}

int main() {
	int x, y;
	double x1, y1;

	cout << "Enter two integers: ";
	cin >> x >> y;
	cout << "Sum of integers: " << add(x, y) << endl;
	cout << "Enter two double numbers: ";
	cin >> x1 >> y1;
	cout << "Sum of integers: " << add(x1, y1) << endl;

}