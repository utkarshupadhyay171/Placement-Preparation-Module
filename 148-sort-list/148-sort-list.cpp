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
    ListNode* sortList(ListNode* head) 
    {
        if(head==NULL||head->next==NULL)    
            return head;
        
        ListNode*prev=NULL;
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast&&fast->next)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        
        prev->next=NULL;
        ListNode*l1=sortList(head);
        ListNode*l2=sortList(slow);
        return merge(l1,l2);
    }
    
    ListNode*merge(ListNode*&l1,ListNode*&l2)
    {
        ListNode*head=new ListNode();
        ListNode*h=head;
        while(l1&&l2)
        {
            if(l1->val>l2->val)
            {
                ListNode*node=new ListNode(l2->val);
                h->next=node;
                l2=l2->next;
            }
            else
            {
                ListNode*node=new ListNode(l1->val);
                h->next=node;
                l1=l1->next;
            }
            h=h->next;
        }
        while(l1)
        {
            ListNode*node=new ListNode(l1->val);
            h->next=node;
            l1=l1->next;
            h=h->next;
        }
        while(l2)
        {
            ListNode*node=new ListNode(l2->val);
            h->next=node;
            l2=l2->next;
            h=h->next;
        }
        return head->next;
        
    }
    
};







