/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (!l1) return l2 ;
        if (!l2) return l1 ;

        ListNode* head = new ListNode(0) ;
        ListNode* current = head ;

        bool rest = false ;
        
        while (l1 && l2) {
            int sum = l1->val + l2->val + (rest ? 1 : 0) ;
            ListNode* node = new ListNode(sum % 10) ;
            rest = sum >= 10;
            current->next = node ;
            current = node ;

            l1 = l1->next ;
            l2 = l2->next ;
        }

        while(l1) {
            int sum = l1->val + (rest ? 1 : 0) ;
            ListNode* node = new ListNode(sum % 10) ;
            rest = sum >= 10;
            current->next = node ;
            current = node ;
            l1 = l1->next ;
        }

        while(l2) {
            int sum = l2->val + (rest ? 1 : 0) ;
            ListNode* node = new ListNode(sum % 10) ;
            rest = sum >= 10;
            current->next = node ;
            current = node ;
            l2 = l2->next ;
        }

        if (rest) {
            ListNode* node = new ListNode(1) ;
            current->next = node ;
        }

        return head->next ;
    }
};
