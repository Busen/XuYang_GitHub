//
//  main.cpp
//  twoSum
//
//  Created by 徐杨 on 15/12/17.
//  Copyright (c) 2015年 徐杨. All rights reserved.
//

#include <iostream>
#include "solution.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Solution s1;
    vector<int>numbers = {2,7,11,15};
    int target = 9;
    s1.twoSum(numbers,target);
    return 0;
}