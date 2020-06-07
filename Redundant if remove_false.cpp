#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<int> vec;
	vector<int>::iterator iter = vec.begin();

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);

	for (; iter != vec.end(); ++iter)
	{
		vec.erase(iter);
	}

	cout << "É¾³ýÍê±Ï";
}