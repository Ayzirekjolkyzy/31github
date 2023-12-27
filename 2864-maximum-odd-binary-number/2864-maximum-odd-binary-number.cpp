class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        sort(s.begin(), s.end());
        string ret="";
        for(int i=s.size()-2; i>=0; i--) {
            ret+=s[i];
        }
        ret+=s[s.size()-1];
        return ret;
    }
};