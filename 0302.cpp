#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	c = 1;
	
	cout << "����������" << endl;
	cin >> a;

 while (a >0) //
 {
		b = a % 10;//��aȡ����10��������������λ��ǰĩλ����
		a=a / 10;
		c += 1;//��¼λ����ÿִ��һ��ѭ����Ϊλ����һ
		cout << b ;
	};
	cout <<"\n" << "λ����" << c << endl;

	
	return 0;

 }