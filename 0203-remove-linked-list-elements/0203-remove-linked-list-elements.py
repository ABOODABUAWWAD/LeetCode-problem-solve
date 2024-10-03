class Solution(object):
    def removeElements(self, head, val):
        if head==None:
            return head
        cur=head.next
        prevcur=head
        while cur:
            if cur.val==val:
                prevcur.next=cur.next
                temp=cur
                cur=prevcur.next
                del temp
            else:
                prevcur=cur
                cur=cur.next
        if head.val ==val:
            temp=head
            head=head.next
            del temp
        return head