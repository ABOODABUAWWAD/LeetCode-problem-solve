class Solution(object):
    def removeElements(self, head, val):
        if head==None:
            return head
        cur=head.next
        prevcur=head
        while cur:
            if cur.val==val:
                prevcur.next=cur.next
                cur=prevcur.next
            else:
                prevcur=cur
                cur=cur.next
        if head.val ==val:
            head=head.next
        return head