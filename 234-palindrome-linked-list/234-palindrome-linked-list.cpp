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
    bool isPalindrome(ListNode* head)
    {
        ListNode*slow=head;
        ListNode*fast=head;
        ListNode*prev=slow;
        while(fast&&fast->next)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=NULL;
        ListNode*p=NULL;
        ListNode*curr=slow;
        ListNode*nn=curr->next;
        while(nn)
        {
            curr->next=p;
            p=curr;
            curr=nn;
            nn=nn->next;
        }
        curr->next=p;
        ListNode*temp=head;
        while(temp)
        {
            if(temp->val!=curr->val)
                return false;
            temp=temp->next;
            curr=curr->next;
        }
        return true;
        
        
    }
};