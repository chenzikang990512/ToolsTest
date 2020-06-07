//
//  Undefined_behavior.cpp
//  testzjm
//
//  Created by 家铭 on 2020/5/27.
//  Copyright © 2020 家铭. All rights reserved.
//

#include<iostream>

int main(int argc, char* argv[])
{
    while (1)
    {
        int* p=new int[1024*1024];
        delete p; //没有用delete[] p;
    }

    return 0;
}
