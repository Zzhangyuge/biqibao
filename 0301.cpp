#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "请输入两个数";
	cin>> a >>b;
	if (a < b) {

	
		cout << "a的值是" << a <<"\n" << "b的值是" << b<<"\n" << "a<b";

	}
	else if (a > b) {

		cout <<"a的值是"<<a<<"\n" << "b的值是" << b<<"\n" << "a>b";
	}
	else {
	
		cout << "a的值是" << a <<"\n" << "b的值是" << b<<"\n" << "a=b";

	}
	return 0;
}
