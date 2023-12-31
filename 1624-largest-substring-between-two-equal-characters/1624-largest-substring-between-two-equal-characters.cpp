class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int ret=-1, temp=-1;
        for(int i=0; i<s.size(); i++) {
            for(int j=s.size()-1; j>i; j--) {
                if(s[i]==s[j]) {temp=j-i-1; break;} 
                }
            if(temp>ret) ret=temp;
            }
        return ret;
        }
};