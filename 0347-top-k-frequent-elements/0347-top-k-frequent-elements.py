class Solution(object):
    def topKFrequent(self, nums, k):
        from collections import defaultdict
        finalresult=[]
        result = defaultdict(int)

        for i in nums:
            result[i]=result.get(i,0)+1
        for i in range(k):
            maxkey = max(result, key=result.get)
            finalresult.append(maxkey)
            del result[maxkey]
        return finalresult
        
        