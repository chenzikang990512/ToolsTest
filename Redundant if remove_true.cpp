#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
	list<int> list;
	std::list<int>::iterator iter = list.begin();

	list.push_back(1);
	list.push_back(2);
	list.push_back(3);

	for (; iter != list.end(); ++iter)
	{
		list.erase(iter++);
	}

	cout << "É¾³ıÍê±Ï";
}
