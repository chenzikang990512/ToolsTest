#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<int> vec;

	vec.push_back(1);
	vec.push_back(2);
	// ��������ĵ�һ��Ԫ��
	cout << "First number: " << *vec.begin() << "\n";
}
