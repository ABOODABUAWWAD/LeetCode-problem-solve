class Solution(object):
    def largestRectangleArea(self, high):
        Total=0
        stack=list()
        for i,h in enumerate(high):
            start = i 
            while stack and stack[-1][1]>h:
                index , stkh = stack.pop()
                Total=max(Total,stkh*(i-index))
                start=index
            stack.append((start,h))    
        for i,h in stack:
            Total=max(Total,h * (len(high)-i))
        return Total
