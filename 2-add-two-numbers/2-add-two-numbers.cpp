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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int s=0;
        int c=0;
        ListNode*temp=new ListNode();
        ListNode*t2=temp;
        while(l1||l2||c)
        {
            s=0;
            
            if(l1)
            {
                s+=l1->val;
                l1=l1->next;    
            }    
            
            if(l2)
            {
                s+=l2->val;
                l2=l2->next;
            }
            
            s+=c;
            c=s/10;
            s=s%10;
            
            ListNode*t=new ListNode(s);
            
            t2->next=t;
            t2=t2->next;
            
        }
        
        
        return temp->next;
    }
};