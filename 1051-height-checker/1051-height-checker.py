class Solution(object):
    def heightChecker(self, heights):
        expected = list(heights)
        expected.sort()
        counter=0
        for i in range(len(expected)):
            if expected[i]!=heights[i]:
                counter+=1
        return counter
        