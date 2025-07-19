from collections import Counter 
class Solution(object):
    def isAnagram(self, s, t):
        st1=Counter(s)
        st2=Counter(t)
        return st1 == st2