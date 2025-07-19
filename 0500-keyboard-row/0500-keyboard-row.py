class Solution(object):
    first_row = {'q','w','e','r','t','y','u','i','o','p'}
    second_row= {'a','s','d','f','g','h','j','k','l'}
    third_row= {'z','x','c','v','b','n','m'}
        
    def findWords(self, words):
        res = list()
        for word in words:
            if self.checkword(word.lower()):
                res.append(word)
        return res

    def checkword(self, word):
        flag=1
        if word[0] in self.first_row:
            flag=1
        elif word[0] in self.second_row:
            flag=2
        elif word[0] in self.third_row:
            flag=3    
        else:
            return False
        for i in range(1,len(word)):
            if flag == 1:
                if word[i] not in self.first_row:
                    return False
            elif flag == 2:        
                if word[i] not in self.second_row:
                    return False
            elif flag == 3:
                if word[i] not in self.third_row:
                    return False
        return True
