#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<int> vec;

	vec.push_back(1);
	vec.push_back(2);
	// 输出容器的第一个元素
	cout << "First number: " << *vec.begin() << "\n";
}
