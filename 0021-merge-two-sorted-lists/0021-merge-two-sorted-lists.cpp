class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list=new ListNode(0);
        ListNode* cur=list;
        while(list1&&list2){
            if(list1->val<list2->val){
                cur->next=list1;
                list1=list1->next;
            } else{
                cur->next=list2;
                list2=list2->next;
            }
            cur=cur->next;
        }
        cur->next= list1?list1:list2;
        return list->next;
    }
};