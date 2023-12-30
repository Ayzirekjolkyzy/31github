class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        if(arr.size()==1) return {-1};
        vector<int> ret; int temp;
        for(int i=1; i<arr.size(); i++) {
            temp=*max_element(arr.begin()+i, arr.end());
            ret.push_back(temp);
        }
        ret.push_back(-1);
        return ret;
    }
};