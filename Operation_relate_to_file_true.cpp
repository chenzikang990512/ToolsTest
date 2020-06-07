#include <iostream>
#include<fstream> 
using namespace std;
int main() {
	ifstream infile;
	infile.open("./data/test.txt");
	if (!infile.is_open())
		cout << "Error opening file";
	else {
		int height;
		infile >> height;
		cout << height;
	}
	return 0;
}