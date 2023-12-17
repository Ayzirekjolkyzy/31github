class Solution {
public:
    string reformat(string s) {
        string temp="", ret=""; int i=0;
        for(i=0; i<s.size(); i++) {
            if(isdigit(s[i])) { temp+=s[i]; s.erase(s.begin()+i); i--;}
        }
        
        if(s.size()>temp.size())     {if((s.size()-temp.size())>1) return "";}
        else if(s.size()<temp.size())     {if((temp.size()-s.size())>1) return "";}
        i=0;
        while(i<s.size()&&i<temp.size()) {
           if(s.size()>temp.size()) {ret+=s[i]; ret+=temp[i];}
            else {ret+=temp[i]; ret+=s[i]; }
            i++; }
        if(s.size()>temp.size()) ret+=s[i]; 
        else if(s.size()<temp.size()) ret+=temp[i];
        return ret;
    }
};