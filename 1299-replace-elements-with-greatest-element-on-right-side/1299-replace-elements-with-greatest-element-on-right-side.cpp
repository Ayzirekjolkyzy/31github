class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        if(arr.size()==1) return {-1};
        vector<int> ret;
        for(int i=1; i<arr.size(); i++) {
             ret.push_back(*max_element(arr.begin()+i, arr.end()));
        }
        ret.push_back(-1);
        return ret;
    }
};