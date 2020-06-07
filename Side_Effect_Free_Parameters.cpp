#include<iostream>
using namespace std;

int square(int a) {
	return a*a;
}

int main() {
	int a = 3,b;
	b = square(++a);
	cout << a<< " " << b;
}
