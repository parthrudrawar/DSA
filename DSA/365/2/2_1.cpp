// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         queue<int> q1;
//         queue<int> q2;
        
//         // Store digits of l1 in q1
//         while (l1 != NULL) {
//             q1.push(l1->val);
//             l1 = l1->next;
//         }
        
//         // Store digits of l2 in q2
//         while (l2 != NULL) {
//             q2.push(l2->val);
//             l2 = l2->next;
//         }
        
//         ListNode* dummyHead = new ListNode(0); // Dummy head for the result linked list
//         ListNode* current = dummyHead;
//         int carry = 0;
        
//         // Perform addition
//         while (!q1.empty() || !q2.empty() || carry != 0) {
//             int sum = carry;
//             if (!q1.empty()) {
//                 sum += q1.front();
//                 q1.pop();
//             }
//             if (!q2.empty()) {
//                 sum += q2.front();
//                 q2.pop();
//             }
//             carry = sum / 10;
//             current->next = new ListNode(sum % 10);
//             current = current->next;
//         }
        
//         return dummyHead->next;
//     }
// };
