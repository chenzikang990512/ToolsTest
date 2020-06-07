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
		cout << "ÈÝÆ÷Îª¿Õ" << "\n";
	}
	else
		cout << "ÈÝÆ÷²»Îª¿Õ" << "\n";
}
