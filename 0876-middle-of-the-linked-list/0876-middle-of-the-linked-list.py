class Solution(object):
    def middleNode(self, head):
        cur = head
        count=0
        while cur:
            count+=1
            cur=cur.next
        for i in range(count/2):
            head=head.next
        return head