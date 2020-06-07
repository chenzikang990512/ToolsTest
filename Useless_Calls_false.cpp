#include<iostream>
using namespace std;

class A {
private:
	int i;
public:
	A(int a) {
		i = a;
	};

	void useA()
	{
		cout << "A is used";
	}

	~A() {
		
	};
};

class B {
private:
	int i;
public:
	B(int a) {
		i = a;
	};

	void useB()
	{
		cout << "B is used";
	}

	~B() {

	};
};


void test(A a, B b)
{
	a.useA();
}

int main()
{
	A a(1);
	B b(1);
	test(a,b);
}