class Solution(object):
    def longestConsecutive(self, nums):
        if len(nums)==0:
            return 0
        nums.sort()
        k=1
        lst=list()
        for i in range(len(nums)):
            if i==0:
                k=1
                continue
            if nums[i]-nums[i-1]==1:
                k+=1
            elif nums[i]-nums[i-1]==0:
                continue
            else:
                lst.append(k)
                k=1   
        lst.append(k)
        return max(lst)
