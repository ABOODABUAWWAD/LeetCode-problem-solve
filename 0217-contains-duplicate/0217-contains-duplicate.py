class Solution(object):
    def containsDuplicate(self, nums):
        sett=set(nums)
        if len(sett)!= len(nums):
            return True
        return False