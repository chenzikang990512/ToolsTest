#include<iostream>
using namespace std;

class A {
public:
	A(int id):id(id){
	}

	int getId() {
		return id;
	}

private:
	const int id;
};
const int readonly = 10;

int main() {
	A a(100);
	cout << a.getId();
}

