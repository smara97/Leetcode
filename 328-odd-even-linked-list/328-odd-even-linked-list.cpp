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
    ListNode* oddEvenList(ListNode* head) {
        
        if(head == NULL || head->next == NULL || head->next->next ==NULL)
            return head;

        ListNode* F = head;
        ListNode* S = head->next;
        ListNode* temp = S;
        
        while(S != NULL && S->next != NULL)
        {
            F->next = S->next;
            F = F->next;

            S->next = F->next;
            S = S->next;
        }
        F->next = temp;
        
        return head;
    }
};