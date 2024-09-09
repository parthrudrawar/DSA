// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.



// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         ListNode* dummyHead = new ListNode(0);
//         ListNode* p = l1;
//         ListNode* q = l2;
//         ListNode* current = dummyHead;
//         int carry = 0;
        
//         while (p != NULL || q != NULL) {
//             int x = (p != NULL) ? p->val : 0;
//             int y = (q != NULL) ? q->val : 0;
//             int sum = carry + x + y;
//             carry = sum / 10;
//             current->next = new ListNode(sum % 10);
//             current = current->next;
//             if (p != NULL) p = p->next;
//             if (q != NULL) q = q->next;
//         }
        
//         if (carry > 0) {
//             current->next = new ListNode(carry);
//         }
        
//         return dummyHead->next;
//     }
// };
