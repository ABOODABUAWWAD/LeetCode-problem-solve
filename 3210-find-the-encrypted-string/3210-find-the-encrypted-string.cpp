class Solution {
public:
    string getEncryptedString(string s, int k) {
        string EncryptedStr=s;
        for (int i = 0; i < s.length(); i++) {
            EncryptedStr[i] = s[(i + k) % s.length()];
        }
        return EncryptedStr;
    }
};