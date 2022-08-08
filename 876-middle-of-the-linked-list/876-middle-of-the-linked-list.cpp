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
    ListNode* middleNode(ListNode* head) 
    {
        ListNode*temp=head;
        int l=0;
        while(temp)
        {
            l++;
            temp=temp->next;
        }
        int i=0,c=l/2;
        temp=head;
        while(i<c)
        {
            temp=temp->next;
            i++;
        }
        return temp;
    }
};