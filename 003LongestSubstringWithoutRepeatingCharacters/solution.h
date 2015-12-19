//
//  solution.h
//  003
//
//  Created by 徐杨 on 15/12/19.
//  Copyright (c) 2015年 徐杨. All rights reserved.
//

#ifndef _03_solution_h
#define _03_solution_h

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        int indexs[256],startIndex = 0,length = 0;
        memset(indexs,-1,sizeof(indexs));
        for (int i = 0; i<s.size(); i++) {
            if (indexs[s[i]] != -1) {
                startIndex = indexs[s[i]]+1;
            }
            if (i-startIndex+1 > length) {
                length = i-startIndex+1;
            }
            indexs[s[i]] = i;//表示s[i]出现了，且是在下标为i处出现了
            
        }
        return length;
    }
};

#endif
