#include <iostream>
using namespace std;
int main() {
	int a, b;
	a = 0;
	while (a < 8) {
		b = 8 - a;//星少空格多
		for (int c = b;c> 0;c--) {//用空格找平金字塔前端，第一行8空格即八字节（因为一共八行，最下面一行8星，8星占16字节，取一半）
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