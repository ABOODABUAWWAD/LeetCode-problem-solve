class Solution(object):
    def subsets(self, nums):
        res,sol=list(),list()
        end=len(nums)
        def fillsubsets(start):
            if start==end:
                res.append(sol[:])
                return 
            sol.append(nums[start])
            fillsubsets(start+1)
            sol.pop()
            fillsubsets(start+1)
        fillsubsets(0)
        return res


        