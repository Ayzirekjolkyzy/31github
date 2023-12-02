class Solution {
public:
    bool checker(string a, string b) {
        int i=0, j=0; bool t=false;
        while(i<a.size()) {
            j=0;
            while(j<b.size()) {
                if(a[i]==b[j]) {t=true; b.erase(b.begin()+j); break;}
                j++;
            }
            if(!t) return false;
            i++; t=false;
        }
        return true;
    }
    int countCharacters(vector<string>& words, string chars) {
        sort(words.begin(), words.end());
        sort(chars.begin(), chars.end());
        int k=0;
        for(int i=0; i<words.size(); i++) {
           if(checker(words[i], chars)) k+=words[i].size();
        }
        return k;
    }
};