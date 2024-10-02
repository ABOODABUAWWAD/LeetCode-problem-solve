# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def isPalindrome(self, head):
        cur= head 
        flag=False 
        stack=[]
        if(cur.next == None):
            return True
        while(cur):
            stack.append(cur.val)
            cur=cur.next
        odd=len(stack)%2
        if(odd == 0):
            stack2=stack[len(stack) // 2: ]
            del stack[len(stack) // 2 :]
            stack2.reverse()
            if(stack == stack2):
                flag=True        
            else:
                flag=False
        else:
            stack2=stack[(len(stack) // 2 )+1:]
            del stack[(len(stack) // 2 ):]
            stack2.reverse()
            if(stack == stack2):
                flag=True
            else:
                flag=False
        return flag
        