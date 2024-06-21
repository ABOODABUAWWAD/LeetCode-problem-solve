class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool check=false;int whereIam=-1;
        if(s.length()==0)return true;
        if(s.length()>t.length())return false;
        if(s.length()==t.length()&&s!=t)return false;
    for(int i=0;i<s.length();i++){
        for(int j=whereIam+1;j<t.length();j++){
            if(s[i]==t[j]){whereIam=j;check=true;break;}
            else if(s[i]!=t[j]&&j!=t.length()-1){check=false;continue;}
            else return false;
        }
         if (whereIam == t.length() - 1 && i < s.length() - 1)return false;
    }
    return check;
    }
};