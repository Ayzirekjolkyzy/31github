class Solution {
public:
    vector<int> findPeaks(vector<int>& m) {
        vector<int> ret;
        for(int i=1; i<m.size()-1; i++) {
            if(m[i]>m[i-1]&&m[i]>m[i+1]) ret.push_back(i); 
        }
        return ret;
    }
};