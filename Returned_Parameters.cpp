#include<iostream>
using namespace std;

int change(int a) {
	a = 10;
	return a;
}

int main() {
	int b = 5;
	b=change(b);
	cout << b;
}



