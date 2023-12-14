class Solution {
public:
    string reorderSpaces(string text) {
        string ret=""; int  cspace=0, cstring=0;
        bool k=false;
        for(int i=0; i<text.size(); i++) {
            if(text[i]!=' ') {
                k=true;  }
            else { if(k) cstring++;
            cspace++; k=false; }
        }
        if(k) cstring++;
        if(cstring==1){
             for(int i=0; i<text.size(); i++) {
            if(text[i]!=' ') ret+=text[i]; }
            ret.append(cspace, ' ');
                 return ret;}
        k=false; int posit=cspace/(cstring-1);
        for(int i=0; i<text.size(); i++) {
            if(text[i]!=' ') { k=true; ret+=text[i];}
            else { if(k) ret.append(posit, ' '); 
             k=false; } 
        }
        if(!k) ret.erase(ret.size()-posit);
        posit=cspace%(cstring-1);
        if(posit) {
            ret.append(posit, ' ');
        }  
        return ret;
    }
};
