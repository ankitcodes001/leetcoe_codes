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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode*temp = head;
        int len =0;
        while(temp)
        {
            len++;
            temp = temp->next;
        }
        
        if(n>=len)return head->next;
        int c =1;
        temp = head;
        while(c<len-n)
        {
            temp = temp->next;
            c++;
        }
        
        temp->next = temp->next->next;
        return head;
        
        
    }
};