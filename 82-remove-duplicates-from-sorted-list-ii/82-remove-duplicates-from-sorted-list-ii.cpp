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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        
        ListNode*curr=head;
        ListNode*prev=new ListNode();
        ListNode*Head=prev;
        prev->next=curr;
        while(curr)
        {
            if(curr->next&&curr->val==curr->next->val)
            {
                while(curr->next&&(curr->val==curr->next->val))
                {
                    curr=curr->next;
                }
                curr=curr->next;
                prev->next=curr;
            }
            else
            {
                curr=curr->next;
                prev=prev->next;
            }
        }
      
        return Head->next;
        
    }
};