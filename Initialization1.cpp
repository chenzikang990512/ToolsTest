//
//  Initialization1.cpp
//  testzjm
//
//  Created by 家铭 on 2020/5/27.
//  Copyright © 2020 家铭. All rights reserved.
//

#include<iostream>
using namespace std;

class A{
private:
    int i;
public:
    A(int a = 0){
        i = a;
        cout<<"shuchu"<<endl;
    };
    ~A(){
//        cout<<"shuchu2"<<endl;
    };
};

int main(){
//    A a1(); //错误写法
    A a;    //正确写法
//    A a2(1);//正确写法
//    A a3{1};//正确写法
//    A a4{};    //正确写法
}
