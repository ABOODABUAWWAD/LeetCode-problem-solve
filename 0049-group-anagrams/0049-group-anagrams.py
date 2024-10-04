class Solution(object):
    def groupAnagrams(self, strs):
        from collections import defaultdict
        
        result = defaultdict(list)
        
        for s in strs:
            sorted_str = ''.join(sorted(s))
            result[sorted_str].append(s)
        
        return list(result.values())