#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<int> vec;

	vec.push_back(1);
	vec.push_back(2);

	int a = vec[2];

	cout << a;

	return 0;
}