class Solution {
public:
    int secondHighest(string s) {
        set<int> temp;
        for(int i=0; i<s.size(); i++) {
            if(isdigit(s[i])) {
                temp.insert(int(s[i])-48);
            }
        }
        if(temp.size()<2) return -1;
         set <int> :: iterator it = temp.end(); 
        --it; it--;
        return *it;
    }
};