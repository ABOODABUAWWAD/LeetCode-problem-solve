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
    ListNode* swapPairs(ListNode* head) {
    if(head==NULL||head->next==NULL)return head;
    ListNode*cur,*after;int temp=0;
    cur=head;
    after=cur->next;
    while(cur!=nullptr&&after!=nullptr){
        temp=cur->val;
        cur->val=after->val;
        after->val=temp;
        if(after->next==NULL)break;
            cur=after->next;
            after=cur->next;
    }
return head;
    }
};