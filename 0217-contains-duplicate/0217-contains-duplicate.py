class Solution(object):
    def containsDuplicate(self, nums):
        sett=set(nums)
        if len(sett) == len(nums):
            return False
        else:
            return True
        