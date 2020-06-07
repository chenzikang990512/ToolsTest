#include <set>
#include <iostream>

using namespace std;

int main()
{
	set<int> s;
	s.insert(1);
	s.insert(2);

	if (const auto it = s.find(9); it != s.end()) {
		cout << *it;
	}
	else
		cout << *it;
	return 0;
}