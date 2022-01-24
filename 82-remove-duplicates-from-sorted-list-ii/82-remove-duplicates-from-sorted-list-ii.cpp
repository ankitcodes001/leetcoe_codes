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
    ListNode* deleteDuplicates(ListNode* head) {
       
        ListNode* temp = new ListNode(0);
        temp->next = head; // 0 1 2 3 3 4 4 5
        
        ListNode* prev = temp; // 0 1 2 3 3 4 4 5
        
      //  return prev;
        
       
        
        while(head !=NULL)
        { 
            if(head->next != NULL && head->val == head->next->val)
           {
            while(head->next!=NULL && head->val == head->next->val)
            {
                head = head->next;
            }
               
              prev->next = head->next;
                
          }
         else
           prev = prev->next;
         
           head = head->next;
            
            
            
            
        }
        
        return temp->next;
        
        
    }
};