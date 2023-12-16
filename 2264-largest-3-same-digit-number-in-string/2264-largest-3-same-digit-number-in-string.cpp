class Solution {
public:
    string largestGoodInteger(string num) {
        string temp="", ret="";
        for(int i=0; i<num.size(); i++) {
            if(num[i]==num[i+1]&&num[i]==num[i+2]) { temp+=num[i]; i+=2; }
        }
        if(temp.size()==0) return ret;
        sort(temp.begin(), temp.end());
        ret+=temp[temp.size()-1]; ret+=temp[temp.size()-1]; ret+=temp[temp.size()-1];
        return ret;
    }
};