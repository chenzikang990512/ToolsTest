#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
	list<int> vec;
	for (int i = 0; i < 1000000; i++) {
		vec.push_back(i);
	}

	if (vec.size() == 0) {
		cout << "����Ϊ��" << "\n";
	}
	else
		cout << "������Ϊ��" << "\n";
}
