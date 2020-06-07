#include<iostream>
using namespace std;

int u = 5;  //sharing unique parameter

void f1() {
	int a;
	a = u;
	cout << a;
}

void f2() {
	u = 7;
	cout << u;
}

void f3() {
	u = u + 1;
	cout << u;
}

int main() {
	f1();   //u会发生变化
	f2();
	f3();
}
