//
//  solution.h
//  addTwoNumbers
//
//  Created by 徐杨 on 15/12/18.
//  Copyright (c) 2015年 徐杨. All rights reserved.
//
//总结：
//1、不要改变参数链表
//2、我是用flag标记是否要进位，可以直接定义一个up表示定位的数值
//3、插入不能改变头结点

#ifndef addTwoNumbers_solution_h
#define addTwoNumbers_solution_h

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(nullptr){}
};//nullptr是c++11标准


class Solution {
    
public:
    ListNode* addTwoNumbers(ListNode *l1,ListNode *l2){
        int flag = 0;//flag用来标记
        ListNode *l3 = nullptr, *m_l3 = nullptr,*m_l1 = l1,*m_l2 = l2;
        while (m_l1 && m_l2) {
            int val = m_l1->val + m_l2->val;
            if (flag == 1) {
                val+=1;
                flag = 0;
            }
            if (val >= 10) {
                val-=10;
                flag = 1;
            }
            if (!l3) {
                l3 = new ListNode(val);
                m_l3 = l3;
            }else{
                m_l3->next = new ListNode(val);
                m_l3 = m_l3->next;
            }
            m_l1 = m_l1->next;
            m_l2 = m_l2->next;
        }
        while (m_l1) {
            int val = m_l1->val;
            if (flag == 1) {
                val+=1;
                flag = 0;
            }
            m_l3->next = new ListNode(val);
            m_l3 = m_l3->next;
            m_l1 = m_l1->next;
        }
        while (m_l2) {
            int val = m_l2->val;
            if (flag == 1) {
                val+=1;
                flag = 0;
            }
            m_l3->next = new ListNode(val);
            m_l3 = m_l3->next;
            m_l2 = m_l2->next;
        }
        if (flag == 1) {
            m_l3->next = new ListNode(1);
        }
        return l3;
    }
    
};

#endif
