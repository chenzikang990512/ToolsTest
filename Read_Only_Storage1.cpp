#include<iostream>
using namespace std;

class A {
public:
	A(int id) :id(id) {
	}

	int getId() {
		return id;
	}

	int changId(int a) {
		id = a;
	}

private:
	const int id;
};
const int readonly = 10;

int main() {
	A a(100);
	a.changId(50);
	cout << a.getId();
}


	