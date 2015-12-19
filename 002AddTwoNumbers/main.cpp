//
//  main.cpp
//  addTwoNumbers
//
//  Created by 徐杨 on 15/12/18.
//  Copyright (c) 2015年 徐杨. All rights reserved.
//

#include <iostream>
#include "solution.h"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution s;
    ListNode *l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);
    ListNode *l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(6);
    ListNode *l3 = s.addTwoNumbers(l1, l2);
    while (l3) {
        cout<<l3->val<<endl;
        l3 = l3->next;
    }
    std::cout << "Hello, World!\n";
    return 0;
}
