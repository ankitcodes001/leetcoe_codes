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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    // time complexity = o(n)
        // space = o(1);
        
       ListNode*p1= list1;
       ListNode*p2 = list2;
       ListNode*dummy = new ListNode(0);
       ListNode*p3 = dummy;
       // int n=0,m=0;
       /* while(p1)
        {
            p1 = p1->next;
            n++;
        }
        while(p2)
        {
            p2 = p2->next;
            m++;
        }
       */ 
        
        while(p1 && p2)
        {
            if(p1->val <= p2->val)
            {
                p3->next = p1;
                p1= p1->next;
            }
            else
            {
                
                p3->next = p2;
                p2 = p2->next;
                
            }
            
            p3 = p3->next;
        }
        
        while(p1)
        {
            p3->next = p1;
            p1 = p1->next;
            p3 = p3->next;
        }
        while(p2)
        {
            p3->next = p2;
            p2 = p2->next;
            p3 = p3->next;
        }
        
        return dummy->next;
    
    }
};