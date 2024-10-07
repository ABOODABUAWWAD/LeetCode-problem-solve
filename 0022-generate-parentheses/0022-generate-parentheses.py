class Solution(object):
    def generateParenthesis(self, n):
        result=list()
        def getres(OpenP,CloseP,Parentheses):
            if OpenP == CloseP == n:
                result.append(Parentheses)
                return
            if OpenP <n:
                getres(OpenP+1,CloseP,Parentheses+"(")
            if CloseP <OpenP:
                getres(OpenP,CloseP+1,Parentheses+")")
        getres(0,0,"")
        return result