#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> data = { 1,2,3 };
	vector<int>::iterator iter;
	for (iter = data.begin();;iter++)  //out of range
	{
		cout << *iter;
	}
}
