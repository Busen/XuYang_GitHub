//
//  main.cpp
//  003
//
//  Created by 徐杨 on 15/12/19.
//  Copyright (c) 2015年 徐杨. All rights reserved.
//总结
//通常用一个flag来标记变量，但要标记多个时，可以用一个数组来标记多个
//比如标记所有字符用array[256],标记所有小写字母用array[26]***
//一个flag可以两用，即可以用来标记的同时也可以记录数据***

#include <iostream>
#include "solution.h"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution s;
    cout<<s.lengthOfLongestSubstring("abcabcbb")<<endl;
    std::cout << "Hello, World!\n";
    return 0;
}
