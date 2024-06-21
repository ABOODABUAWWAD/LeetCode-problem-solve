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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *cur;
        cur=head ;int number=0;
        while(cur!=NULL ||cur->next!=NULL)
        {
            if(cur==NULL||cur->next==NULL)return head;
            if(cur->val > cur->next->val)
            number=GCD(cur->val,cur->next->val);
            else number=GCD(cur->next->val,cur->val);
            cur->next=new ListNode(number,cur->next);
            cur=cur->next->next;
        }

        return head;
    }
    int GCD(int Bnumber,int Snumber){
        for(int i=Snumber;i>0;i--){
            if(Bnumber%i==0&&Snumber%i==0)return i;
        }
         return 1;
    }
   
};