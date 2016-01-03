//
//  solution.h
//  leetcode_4
//
//  Created by 徐杨 on 15/12/30.
//  Copyright (c) 2015年 徐杨. All rights reserved.
//

#ifndef leetcode_4_solution_h
#define leetcode_4_solution_h
#include <vector>
using namespace std;

class Solution {
public:
    double findKth(vector<int>& nums1,vector<int>& nums2,int k){
        vector<int>m_nums1 = nums1;
        vector<int>m_nums2 = nums2;
        if (m_nums1.empty()) {
            return m_nums2[k-1];
        }
        if (m_nums2.empty()) {
            return m_nums1[k-1];
        }
        if (k ==1) {
            return m_nums1[0]>m_nums2[0]?m_nums2[0]:m_nums1[0];
        }
        if (m_nums1[k/2-1] < m_nums2[k/2-1]) {
            for (int i=0; i<k/2; i++) {
                m_nums1.erase(m_nums1.begin());
            }
            return findKth(m_nums1,m_nums2,k-k/2);
        }
        if (m_nums1[k/2-1] > m_nums2[k/2-1]) {
            for (int i=0; i<k/2; i++) {
                m_nums2.erase(m_nums2.begin());
            }
            return findKth(m_nums1,m_nums2,k-k/2);//一定是k-k/2,而不是k/2
        }
        return m_nums1[k/2-1];
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int total = nums1.size() + nums2.size();
        if (total % 2 == 0) {
            return (findKth(nums1,nums2,total/2)+findKth(nums1,nums2,total/2+1))/2;
        }
        return findKth(nums1,nums2,total/2);
    }
};

#endif
