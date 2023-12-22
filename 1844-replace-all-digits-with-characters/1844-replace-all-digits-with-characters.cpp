class Solution {
public:
    string replaceDigits(string s) {
        string ret;
        for(int i=0; i<s.size(); i++) {
            if(isalpha(s[i])) ret+=s[i];
            else ret+=(ret[ret.size()-1]+s[i]-'0');
        }
        return ret;
    }
};