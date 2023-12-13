class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int ret=0, count=0, tempj;
        vector<int> temp;
        for(int i=0; i<mat.size(); i++) {
            count=0;
            for(int j=0; j<mat[i].size(); j++) {
             if(mat[i][j]==1) { count++; tempj=j;}   
            }
            if(count==1) temp.push_back(tempj);
        }
        for(int j=0; j<temp.size(); j++) {
            count=0;
            for(int i=0; i<mat.size(); i++) {
                if(mat[i][temp[j]]==1) count++;
            }
            if(count==1) ret++;
        }
        return ret;
    }
    
};