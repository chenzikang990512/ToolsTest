
#include<iostream>
using namespace std;
#define SQUARE(a) (a*a)

int main() {
	int a = 3, b;
	b = SQUARE(++a);
	cout << a << " " << b;  //������Ϊ5�� 9
}
