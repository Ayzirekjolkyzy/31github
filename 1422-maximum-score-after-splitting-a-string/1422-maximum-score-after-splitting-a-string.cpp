class Solution {
public:
    int maxScore(string s) {
      int i=0, j=s.size(); int temp=0, temp1=0, ret=0;
        for(i=0; i<s.size()-1; i++) {
            if(s[i]=='0') temp1++; j=s.size()-1;
            temp=temp1;
            while(j>i) {
                if(s[j]=='1') temp++;
                j--;
            }
            if((temp)>ret) ret=temp; 
        }
        return ret;
    }
};