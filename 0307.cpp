#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main() {
	int a, b;
	srand((unsigned)time(NULL));
	b = rand() % 3;
	cout <<"���ȭ��0=ȭͷ��1=������2=��"<<endl;
	cin >> a;
	if ((a != 0)&& (a != 1) && (a != 2)) {
		cout << "�����������������";
	}
	else {
		int c;
		c = a - b;
		if (c == 0) {
			cout << "ƽ��";
		}
		else if ((c == -1) or (c == 2)) {
			cout << "��Ӯ��";
		}
		else {
			cout << "������";
		}
	}
	return 0;
}