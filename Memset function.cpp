#include <iostream>

#include <cstring>

using namespace std;

int main()

{

    char a[5];

    memset(a,'1',5）;

    for(int i=0;i<5;i++)

        cout<<a[i]<<"";

    system("pause");

    return 0;

}