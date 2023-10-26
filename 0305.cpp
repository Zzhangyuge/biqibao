#include <iostream>
using namespace std;
int main() {
	int c;
	cout << "200-300质数为:";
	for (int b = 200;b < 301;b++) {
		for (int a = 2;a < b;a++) {//遍历200-300
			c = b % a;//取余数
			if (c == 0) {//当余数为0，即有因数时，跳出循环
				break;
			}
			if (a == b - 1) {//若被除数进行到b-1，即可判断b为质数，输出b
				cout << b << ' ';//输出数后输出空格
			}
		}


	}

	return 0;
}