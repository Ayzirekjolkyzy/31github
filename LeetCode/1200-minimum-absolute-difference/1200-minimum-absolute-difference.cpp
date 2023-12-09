class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end()); int mindif=arr[1]-arr[0];
        for(int i=1; i<arr.size(); i++) {
           mindif = min(mindif, arr[i]-arr[i-1]);         }
        vector<vector<int>> ret;
        for(int i=1; i<arr.size(); i++) {
            if((arr[i]-arr[i-1])==mindif) ret.push_back({arr[i-1], arr[i]});
        }
        return ret;
    }
};
