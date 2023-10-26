#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main() {
	int a, b;
	srand((unsigned)time(NULL));
	b = rand() % 3;
	cout <<"请出拳，0=拳头，1=剪刀，2=布"<<endl;
	cin >> a;
	if ((a != 0)&& (a != 1) && (a != 2)) {
		cout << "输入错误请重新输入";
	}
	else {
		int c;
		c = a - b;
		if (c == 0) {
			cout << "平手";
		}
		else if ((c == -1) or (c == 2)) {
			cout << "您赢了";
		}
		else {
			cout << "您输了";
		}
	}
	return 0;
}