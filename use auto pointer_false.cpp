#include <iostream>
#include <string>
#include <memory>
using namespace std;

int main()
{
	auto_ptr<string> films[5] = {
	auto_ptr<string>(new string("a")),
	auto_ptr<string>(new string("b")),
	auto_ptr<string>(new string("c"))
	};
	auto_ptr<string> pwin;
	pwin = films[2]; //������Ȩ��films[2]ת�ø�pwin����ʱfilms[2]�������ø��ַ����Ӷ���ɿ�ָ��

	cout << "The nominees for best avian baseballl film are\n";
	for (int i = 0; i < 3; ++i)
	{
		cout << *films[i] << endl;
	}
	cout << "The winner is " << *pwin << endl;
	return 0;
}
