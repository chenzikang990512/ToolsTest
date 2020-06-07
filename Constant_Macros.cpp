
#include<iostream>
using namespace std;
#define N 5+3

void f() {
	int a = N / 2;
	cout << a;   //a= 5+（3/2）得出结果为6
}
int main() {
	f();
}
