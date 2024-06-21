class Solution {
public:
    bool halvesAreAlike(string s) {
        short counterA=0;
        short counterB=0;
        short HalfS=s.length()/2-1;
        for(int i=0;i<s.length();i++)
      {   if(i<=HalfS)
        {
            counterA += int (CheckLetter(s[i]));
        }
        else
        {
            counterB += int (CheckLetter(s[i]));
        }
      }
     if(counterA==counterB)return true;
     else return false;
    }
    bool CheckLetter(char letter){
        letter=tolower(letter);
        return (letter=='a'||letter=='u'||letter=='i'||letter=='e'||letter=='o');
    }
};