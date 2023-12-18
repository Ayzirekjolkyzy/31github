class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& orig, int m, int n) {
        vector<vector<int>> ret; vector<int> temp; int k=0;
        if((m*n)!=orig.size()) return ret;
     for(int i=0; i<m; i++) {
         for(int j=0; j<n; j++) {
             temp.push_back(orig[k]); k++;
         }
         ret.push_back(temp);
         temp.clear();
     }
        return ret;
    }
};