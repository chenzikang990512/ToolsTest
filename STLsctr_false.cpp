#include <iostream>
#include <cstdio>
using namespace std;

const std::string& fun()
{
	string s = "abcd";
	return s.c_str();
}

int main()
{
	string s = fun();
	printf("%s", s.c_str());
	return true;
}