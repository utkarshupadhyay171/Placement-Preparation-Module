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
    
    int length(ListNode*head)
    {
        int l=0;
        ListNode*temp=head;
        while(temp)
        {
            l++;
            temp=temp->next;
        }
        return l;
    }
    
    ListNode* swapNodes(ListNode* head, int k) 
    {
        int x=k;
        int l=length(head);
        int y=length(head)-k;
        ListNode*temp1=head;
        ListNode*temp2=head;
        int i=0;
        while(i<x-1)
        {
            i++;
            temp1=temp1->next;
        }
        int j=0;
        while(j<y)
        {
            j++;
            temp2=temp2->next;
            
            
        }
        swap(temp1->val,temp2->val);
        return head;
        
        
        
    }
};