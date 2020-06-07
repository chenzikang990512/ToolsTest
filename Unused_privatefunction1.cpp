//
//  Unused_privatefunction1.cpp
//  testzjm
//
//  Created by 家铭 on 2020/5/27.
//  Copyright © 2020 家铭. All rights reserved.
//
//
#include<iostream>
#include<string> //当使用string数据类型时要加上；
using namespace std;
//创建学生类；
class Student
{
   //设置访问权限：公开
public:
   string a;
   
   void checkpublic()
   {
       cout << "this is public!"<<endl;
       check();
   }
private:
   void check()
   {
       cout << "this is private!"<<endl;
   }
};

int main(int argc, const char * argv[])
{
   Student S;
   S.checkpublic();
   return 0;
}
