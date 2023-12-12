class Solution {
public:
    int ConvertToInt(string str) 
    {   int ret=0;
        for(int i=0; i<str.size(); i++) {
            ret=(ret*10)+((int)str[i]-97);
        }
     return ret;        
    }
    
    bool isSumEqual(string first, string sec, string target) {
        int a=ConvertToInt(first), b=ConvertToInt(sec), t=ConvertToInt(target);
        if((a+b)==t) return true;
        else return false;
        
        
    }
};
