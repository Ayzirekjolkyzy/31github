class Solution {
public:
    bool checker(int a) {
        if (a==1) return false;
        if(a==2||a==3) return true;
        for(int i=2; i<=sqrt(a); i++) {
            if(a%i==0) return false; 
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        vector<int> ret; int temp;
        for(int i=0, j=nums.size()-1; i<nums.size(), j>=0; i++, j--) {
            temp=0;
            if(checker(nums[i][i])) temp=nums[i][i];
            if(checker(nums[i][j])&&nums[i][j]>temp) temp=nums[i][j];
            ret.push_back(temp);
        }
        sort(ret.begin(), ret.end(), greater<int>());
        return ret[0];
        
    }
};