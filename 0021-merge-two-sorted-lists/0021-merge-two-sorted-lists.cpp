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
ListNode*temp,*h3,*cur3;
    ListNode* mergeTwoLists(ListNode* cur1, ListNode* cur2) {
        if(cur1==nullptr&&cur2==nullptr)return NULL;
        else if(cur1==nullptr)return cur2;
        else if(cur2==nullptr)return cur1;
        
        h3=nullptr;
        unsigned short nullcount=0;
        while(cur1!=nullptr ||cur2!=NULL){
            if(nullcount==0){
                 if(cur1->val <cur2->val)
                 {
                    h3=addnode(nullcount,cur1); 
                    cur1=cur1->next;
                   if(cur1==nullptr)nullcount=1;
                 }
                else
                 {
                     h3=addnode(nullcount,cur2);
                     cur2=cur2->next ;
                    if(cur2==nullptr)nullcount=2;
                 }
            }
            else if(nullcount==1){
                  h3=addnode(nullcount,cur2); 
                  cur2=cur2->next;
                    if(cur2==nullptr)nullcount=2;
            }
            else if(nullcount==2){
                 h3=addnode(nullcount,cur1); 
                 cur1=cur1->next;
                if(cur1==nullptr)nullcount=1; 
            }
        }
        return h3;
    }
    ListNode* addnode(unsigned short &counter,ListNode* cur){
                    temp=new ListNode(cur->val);
                    if (h3 == nullptr) { h3 = temp; cur3 = h3; }
                    else { cur3->next = temp; cur3 = cur3->next; }
                   return h3;
    }
};