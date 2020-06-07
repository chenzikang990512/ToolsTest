#include "stdafx.h"
#include <iostream>
using namespace std;
class date
{
public:
date(int oa=1):a(oa){}
int a;
};
date &operator=(date &d1,date d2)
{
d1.a=d2.a;
return d1;
}
int _tmain(int argc, _TCHAR* argv[])
{
date d1,d2(7);
d1=d2;
cout<<d1.a;
return 0;
}