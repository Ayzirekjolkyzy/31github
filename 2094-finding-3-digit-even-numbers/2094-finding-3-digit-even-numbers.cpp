class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> ans; set<int> ret; int tempi, tempj, temp;
        for(int i=0; i<digits.size(); i++) { 
            if(digits[i]==0) continue;
            else { tempi=digits[i]*100;
               for(int j=0; j<digits.size(); j++) {
                 if(i==j) continue;
                 else { tempj=digits[j]*10;
                    for(int t=0; t<digits.size(); t++) {
                        if(i==t||j==t) continue;
                        else if(digits[t]%2==0) { temp=tempj+tempi+digits[t]; ret.insert(temp); }
                }}
            }}
            
        }
    set <int> :: iterator it = ret.begin();
     for (; it != ret.end(); it++) {
            ans.push_back(*it);
        }
        return ans;
    }
};