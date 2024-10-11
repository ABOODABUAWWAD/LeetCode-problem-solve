class Solution(object):
    def twoSum(self, n, target):
        i=0
        j=len(n)-1
        for _ in range(len(n)):
            if n[i]+n[j]==target:
                return [i+1,j+1]
            elif n[i]+n[j]<target:
                i+=1
            elif n[i]+n[j]>target:
                j-=1
        return [i+1,j+1]
     