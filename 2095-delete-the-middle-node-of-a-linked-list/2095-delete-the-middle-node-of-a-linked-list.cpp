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
    ListNode* deleteMiddle(ListNode* head) 
    {
        
        ListNode*temp=head;
        int l=0;
        while(temp)
        {
            temp=temp->next;
            l++;
        }
        if(l<2)
            return NULL;
        int c=l/2-1,i=0;
        temp=head;
        while(i<c)
        {
            temp=temp->next;
            i++;
        }
        temp->next=temp->next->next;
        return head;
        
    }
};