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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        
        int l=0;
        ListNode*temp=head;
        while(temp)
        {
            temp=temp->next;
            l++;
        }
        if(l==n)
            return head->next;
        temp=head;
        int c=l-n-1;int i=0;
        while(i<c)
        {
            temp=temp->next;   
            i++;
        }
        temp->next=temp->next->next;
        return head;
    }
};