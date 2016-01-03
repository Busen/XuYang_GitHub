//
//  main.cpp
//  leetcode_4
//
//  Created by 徐杨 on 15/12/30.
//  Copyright (c) 2015年 徐杨. All rights reserved.
//

#include <iostream>
#include "solution.h"

int main(int argc, const char * argv[]) {
    vector<int>array1 = {1,4,7,12,16,18};
    vector<int>array2 = {0,2,3,14,15,19};
    int total = array1.size() + array2.size();
    Solution s;
    cout<<s.findKth(array1, array2, 6)<<endl;
    cout<<s.findKth(array1, array2, total/2+1)<<endl;
    cout<<s.findMedianSortedArrays(array1,array2)<<endl;
    std::cout << "Hello, World!\n";
    return 0;
}
