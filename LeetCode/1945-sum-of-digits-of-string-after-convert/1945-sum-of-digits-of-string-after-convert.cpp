class Solution {
public:
    int getLucky(string s, int k) {
      int ret=0;
        string temp="";
        for(int i=0; i<s.size(); i++) {
            temp+=to_string((int)s[i]-96);
        }
        while(k>0) { ret=0;
            for(int i=0; i<temp.size(); i++) {
                ret+=(int)temp[i]-48;
            } k--;
            temp=to_string(ret);
        }
        return ret;
    }
};
