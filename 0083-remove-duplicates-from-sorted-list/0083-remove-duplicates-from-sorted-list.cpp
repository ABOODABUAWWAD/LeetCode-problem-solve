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
       ListNode*cur,*pre;short counter=0;
       if(head==NULL||head->next==NULL)return head;
       pre=head;cur=pre->next;
       while(cur!=nullptr)
       {
        if(pre->val==cur->val){cur=cur->next;counter=1;}
        else {
            pre->next=cur;
            pre=cur;
            cur=cur->next;
            counter=0;
            }
       }
       if(counter==1)pre->next=NULL;
       return head; 
    }
};