class Solution(object):
    def searchMatrix(self, matrix, target):
        l=0
        r=len(matrix[0])-1
        n=len(matrix)
        row=0
        for i in range(n):
            if matrix[i][l]<=target and matrix[i][r]>=target:
                row=i
                break
        while l<=r:
            m=(r+l)//2
            if matrix[row][m]==target:
                return True
            elif matrix[row][m]<target:
                l=m+1
            else:
                r=m-1
        return False
                
        