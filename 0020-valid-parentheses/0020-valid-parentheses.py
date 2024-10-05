class Solution(object):
    def isValid(self, s):
        if len(s)==0:
            return True
        lst=list()
        counter=0
        for i in s:
            if i in '(' or i in '{' or i in '[':
                lst.append(i)
                counter+=1
            elif i in ')' and counter>0:
                if lst[len(lst)-1]=='(':
                    lst.pop()
                    counter-=1
                else:
                    return False
            elif i in '}' and counter>0:
                if lst[len(lst)-1]=='{':
                    lst.pop()
                    counter-=1
                else:
                    return False
            elif i in ']' and counter>0:
                if lst[len(lst)-1]=='[':
                    lst.pop()
                    counter-=1
                else:
                    return False
            else:
                return False

        return True if len(lst)==0 else False