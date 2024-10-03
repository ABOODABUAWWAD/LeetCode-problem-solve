class Solution(object):
    def getIntersectionNode(self, headA, headB):
        curA=headA
        setA=set()
        while curA:
            setA.add(curA)
            curA=curA.next
        while headB:
            if headB in setA:
                return headB
            else:
                headB=headB.next
        return None