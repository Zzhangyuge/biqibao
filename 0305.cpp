#include <iostream>
using namespace std;
int main() {
	int c;
	cout << "200-300����Ϊ:";
	for (int b = 200;b < 301;b++) {
		for (int a = 2;a < b;a++) {//����200-300
			c = b % a;//ȡ����
			if (c == 0) {//������Ϊ0����������ʱ������ѭ��
				break;
			}
			if (a == b - 1) {//�����������е�b-1�������ж�bΪ���������b
				cout << b << ' ';//�����������ո�
			}
		}


	}

	return 0;
}