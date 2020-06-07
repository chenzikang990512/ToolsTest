#include <iostream>

#include <cstring>

#include <windows.h>

using namespace std;

int main()

{

    int a[5];

    memset(a,1,20）;//如果这里改成memset(a,1,5*sizeof(int))也可以，因为memset按字节赋值。

    for(int i=0;i<5;i++)

        cout<<a[i]<<"";

    system("pause");

    return 0;

}