//
//  solution.h
//  twoSum
//
//  Created by 徐杨 on 15/12/17.
//  Copyright (c) 2015年 徐杨. All rights reserved.
//

#ifndef twoSum_solution_h
#define twoSum_solution_h

#include<vector>
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target);
};

std::vector<int> Solution::twoSum(std::vector<int>& nums,int target){
    for (std::vector<int>::iterator iter1 = nums.begin(); iter1!=nums.end()-1; iter1++) {
        for (std::vector<int>::iterator iter2 = iter1+1; iter2!=nums.end(); iter2++) {
            if (*iter1+*iter2 == target) {
                std::cout<<"index1:"<<distance(nums.begin(),iter1)<<std::endl;
                std::cout<<"index2:"<<distance(nums.begin(),iter2)<<std::endl;
            }
        }
    }
    return nums;
}

#endif
