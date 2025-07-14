class Solution(object):
    def addBinary(self, a, b):
       binsum=bin((int(a,2))+(int(b,2)))
       sum=binsum[2:]
       return str(sum)