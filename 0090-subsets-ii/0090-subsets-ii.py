class Solution(object):
    def subsetsWithDup(self, nums):
        res,sol=list(),list()
        end=len(nums)
        nums.sort()
        def fillsubsets(start):
            if start==end:
                if sol not in res:
                    res.append(sol[:])
                return 
            sol.append(nums[start])
            fillsubsets(start+1)
            sol.pop()
            fillsubsets(start+1)
        fillsubsets(0)
        return res
        