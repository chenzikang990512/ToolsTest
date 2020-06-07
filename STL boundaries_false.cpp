#include <iostream>
#include <list>
#include <string>
using namespace std;


int main()
{
	list<int> list = { 1,2,3,4,5,6,7 };
	

	std::list<int>::iterator iter = list.begin();
	// ³¢ÊÔvec.end()

	for (; iter < list.end(); ++iter)
	{
		cout << *iter << " ";
	}
}
