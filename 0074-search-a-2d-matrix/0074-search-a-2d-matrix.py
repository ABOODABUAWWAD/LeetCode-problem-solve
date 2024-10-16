class Solution(object):
    def searchMatrix(self, lst, target):
        l = len(lst[0]) - 1
        min_row = 0
        max_row = len(lst)-1
        TRI = 0
        while min_row <= max_row:
            mid_row = (max_row+min_row)//2
            if lst[mid_row][0] <= target and lst[mid_row][l] >= target:
                TRI = mid_row
                break
            elif lst[mid_row][l] < target:
                min_row = mid_row + 1
            elif lst[mid_row][0] > target:
                max_row = mid_row - 1
        left = 0
        right = l
        while left <= right:
            middle = (right + left) // 2
            if lst[TRI][middle] == target:
                return True 
            elif lst[TRI][middle] > target:
                right = middle - 1
            else:
                left = middle + 1

        return False