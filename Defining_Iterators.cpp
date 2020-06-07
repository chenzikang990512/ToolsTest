#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> data = { 1,2,3 };
	vector<int>::iterator iter=data.begin();
	cout << *iter;
}


