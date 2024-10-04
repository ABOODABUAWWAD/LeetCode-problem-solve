from collections import defaultdict
from functools import reduce
import operator

class Solution(object):
    def productExceptSelf(self, nums):
        if len(nums) == 1:
            return nums
        
        n = len(nums)
        result = [1] * n
        
        prefix_product = 1
        for i in range(n):
            result[i] = prefix_product
            prefix_product *= nums[i]

        suffix_product = 1
        for i in range(n - 1, -1, -1):
            result[i] *= suffix_product
            suffix_product *= nums[i]
        
        return result
