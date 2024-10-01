class Solution(object):
    def sortedSquares(self, nums):
        nums1=[x*x for x in nums]
        nums1.sort()
        return nums1
        