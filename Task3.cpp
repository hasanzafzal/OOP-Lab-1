#include <iostream>
using namespace std;

struct info {
	int s1;
	float s2;
};

struct Data {
	info x;
	info y;
};

int main() {
	Data d;
	d.x.s1 = -5;
	d.x.s2 = 5.5;
	if (d.x.s1 < 0) {
		d.y.s1 = (-1) * d.x.s1;
	}
	if (d.x.s2 < 0) {
		d.y.s2 = (-1) * d.x.s2;
	}
	else {
		d.y.s1 = d.x.s1;
		d.y.s2 = d.x.s2;
	}
	cout << "Absolute value of " << d.x.s1 << "= " << d.y.s1 << endl;
	cout << "Absolute value of" << d.x.s2 << "= " << d.y.s2 << endl;
	return 0;
}