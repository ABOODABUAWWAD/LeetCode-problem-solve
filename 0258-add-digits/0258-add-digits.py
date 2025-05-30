class Solution(object):
    def addDigits(self, num):
        sum=0
        while num!=0:
            sum+=num%10
            num=num//10
            if num==0:
                Ssum=str(sum)
                if len(Ssum)!=1:
                    num=sum
                    sum=0
        return sum