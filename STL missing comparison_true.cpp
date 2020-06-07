#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<int> vec;
	
	for (int i = 0; i < 5; i++) {
		vec.push_back(i);
	}
	vector<int>::iterator it = vec.begin();
	for (int j = 0; it != vec.end(); j++, it++) {
		if (j % 2 == 1) {
			it++;
		}

		if (it != vec.end()) {

			cout << *it << " ";
		}
		else
			break;
	}

}
