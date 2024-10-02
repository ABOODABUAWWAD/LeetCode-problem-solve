# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def reverseList(self, head):
        if head==None or head.next==None:
            return head
        lst=[]
        cur=head
        while cur:
            lst.append(cur.val)
            cur=cur.next
        cur=head
        while cur:
            cur.val=lst.pop()
            cur=cur.next
        del lst
        return head
        