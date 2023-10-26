#include <iostream>
using namespace std;
int main() {
	int  a, b, c,d;
	cout << "请输入abc的值" << endl;
	cin >> a >> b >> c;
	d = b*b - 4 * a * c;
	
	if (a == 0) {
		cout << "a不能=0，请重新输入";
	}
	else {
		if (d > 0) {
			double z, y;
			z = 0 - b + sqrt(d);
			z = z / 2 / a;
			y = 0 - b - sqrt(d);
			y = y / 2 / a;
			cout << "x1=" << z <<'\n' << "x2=" << y;
		}
		else if (d < 0) {
			cout << "方程无实根";
		}
		else {
			double x;
			x = b / 2 / a;
			x = 0 - x;
			cout<<"x1=x2="<<x;
		}

	}
	return 0;
}