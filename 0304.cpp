#include <iostream>
using namespace std;
int main() {
	int a, b;
	a = 0;
	while (a < 8) {
		b = 8 - a;//���ٿո��
		for (int c = b;c> 0;c--) {//�ÿո���ƽ������ǰ�ˣ���һ��8�ո񼴰��ֽڣ���Ϊһ�����У�������һ��8�ǣ�8��ռ16�ֽڣ�ȡһ�룩
			cout << ' ';
		}
		for (int d =8- a;d < 8;d++) {
			cout << "*" << ' ';
		}
		b--;
		
		a++;
		cout << '\n';
	}
		
}