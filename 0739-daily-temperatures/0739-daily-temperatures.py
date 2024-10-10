class Solution(object):
    def dailyTemperatures(self, t):
        res =[0] *len(t)
        stack=list()

        for i,t in enumerate(t):
            while stack and stack[-1][0]<t:
                stackT,stackIndex=stack.pop()
                res[stackIndex]=i-stackIndex
            stack.append([t,i])
        return res
         
