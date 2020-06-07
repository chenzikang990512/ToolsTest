
#include<iostream>
using namespace std;
#define SQUARE(a) (a*a)

int main() {
	int a = 3, b;
	b = SQUARE(++a);
	cout << a << " " << b;  //输出结果为5， 9
}
