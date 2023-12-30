class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        if(arr.size()==1) return {-1};
        vector<int> ret(arr.size()); int temp=-1;
        for(int i=arr.size()-1; i>=0; i--) {
            ret[i]=temp;
            temp=max(arr[i], temp);
        }
        return ret;
    }
};
