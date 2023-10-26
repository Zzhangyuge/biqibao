#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	c = 1;
	
	cout << "请输入整数" << endl;
	cin >> a;

 while (a >0) //
 {
		b = a % 10;//对a取除以10的余数，余数几位当前末位数字
		a=a / 10;
		c += 1;//记录位数，每执行一次循环即为位数加一
		cout << b ;
	};
	cout <<"\n" << "位数：" << c << endl;

	
	return 0;

 }