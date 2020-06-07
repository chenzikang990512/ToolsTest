//
//  Execution.cpp
//  testzjm
//
//  Created by 家铭 on 2020/5/27.
//  Copyright © 2020 家铭. All rights reserved.
//

#include<iostream>

int main(){
    int r=7;
    if(r==7){
        r++;
        std::cout<<"123";
        abort();
        std::cout<<"123";
    }
    return 0;
}
