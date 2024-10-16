from collections import defaultdict
class TimeMap(object):
    def __init__(self):
        self.dic=defaultdict(list)
        
    def set(self, key, value, timestamp):
        self.dic[key].append([timestamp, value])
        
    def get(self, key, timestamp):
        if key not in self.dic:
            return ""
        values = self.dic[key]
        if values[-1][0]<=timestamp:
            return values[-1][-1]
        left, right = 0, len(values) - 1
        res = ""
        while left <= right:
            mid = (left + right) // 2
            if values[mid][0] <= timestamp:
                res = values[mid][1]
                left = mid + 1
            else:
                right = mid - 1
                
        return res
