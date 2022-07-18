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
    ListNode* middleNode(ListNode* head) {
        
        float len_n = 0.0;
        ListNode* temp = head;
        
        while(temp->next){
            len_n++;
            temp = temp->next;
        }
        
        len_n/=2.0;
        
        while(len_n>0)
            head = head->next, len_n--;
        
        return head;
    }
};