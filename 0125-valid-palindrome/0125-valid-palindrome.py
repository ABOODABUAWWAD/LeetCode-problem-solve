import re
class Solution(object):
    def isPalindrome(self, s):
        s=("".join(re.split(r"[,:|;'.@#_{}\'\"\\\[\]\-.?!()` ]",s))).lower() 
        return s==s[::-1]