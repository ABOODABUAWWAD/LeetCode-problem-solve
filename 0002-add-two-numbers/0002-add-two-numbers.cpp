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
ListNode* addTwoNumbers(ListNode* cur1, ListNode* cur2) {
    short sum = 0, reminder = 0, number = 0, counter = 0;
    ListNode*newnode,*result;
    newnode = new ListNode();
    result = newnode;

    while (cur1 != nullptr || cur2 != nullptr)
    {
        
        if (cur1 != nullptr && cur2 != nullptr)
        {
            sum = cur1->val + cur2->val + reminder;
            reminder = 0;
            if (sum >= 10)
            {
                number = sum;
                sum = sum % 10;
                reminder = number / 10;
            }
            if (counter == 0)
            {
                newnode = new ListNode(sum); result = newnode;
            }
            else if (counter != 0)
            {
                newnode->next = new ListNode(sum);
                newnode = newnode->next;
            }
            cur1 = cur1->next;
            cur2 = cur2->next;
        }


        else if (cur1 != nullptr)
        {
            sum = cur1->val + reminder;
            reminder = 0;

            if (sum >= 10)
            {
                number = sum;
                sum = sum % 10;
                reminder = number / 10;
            }
            if (counter == 0)
            {
                newnode = new ListNode(sum); result = newnode;
            }
            else if (counter != 0)
            {
                newnode->next = new ListNode(sum);
                newnode = newnode->next;
            }

            cur1 = cur1->next;
        }


        else if (cur2 != nullptr)
        {
            sum = cur2->val + reminder;
            reminder = 0;
            if (sum >= 10)
            {
                number = sum;
                sum = sum % 10;
                reminder = number / 10;
            }
            if (counter == 0)
            {
                newnode = new ListNode(sum); result = newnode;
            }
            else if (counter != 0)
            {
                newnode->next = new ListNode(sum);
                newnode = newnode->next;
            }

            cur2 = cur2->next;
        }
        counter++;
    }
    if(reminder !=0)
    {
        newnode->next = new ListNode(reminder);
    }
    return result;
}
    

};