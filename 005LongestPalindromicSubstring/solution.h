//
//  solution.h
//  leetcode_5
//
//  Created by 徐杨 on 15/12/30.
//  Copyright (c) 2015年 徐杨. All rights reserved.
//

#ifndef leetcode_5_solution_h
#define leetcode_5_solution_h
using namespace std;

class Solution {
public:
    string expand(string s,int c1,int c2){
        int left = c1,right = c2;
        while (s[left] == s[right] && left>=0 && right<s.length()) {
            left--;
            right++;
        }
        return s.substr(left+1,right-left-1);
    }
    string longestPalindrome(string s) {
        string pa_s = s.substr(0,1),pa_s1 = pa_s,pa_s2 = pa_s;
        for (int i = 1; i<s.size(); i++) {
            pa_s1 = expand(s, i, i);
            pa_s2 = expand(s, i, i+1);
            if (pa_s1.length() > pa_s.length()) {
                pa_s = pa_s1;
            }
            if (pa_s2.length() > pa_s.length()) {
                pa_s = pa_s2;
            }
        }
        return pa_s;
    }
};

#endif
