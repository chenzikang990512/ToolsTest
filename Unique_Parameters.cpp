#include<iostream>
using namespace std;

int u = 5;  //sharing unique parameter

void f1(int v) {
	int a;
	a = v;
	cout << a;
}

void f2(int v) {
	v = 7;
	cout << v;
}

void f3(int v) {
	v = v + 1;
	cout << v;
}

int main() {
	f1(u);
	f2(u);
	f3(u);
}
