class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
         vector<int> ans;
        if(nums.size()==1) { return {0,1};} 
        sort(nums.begin(), nums.end());
        int i=0, pair=0, leftover=0;
        while(i<nums.size()-1) {
            if(nums[i]==nums[i+1]) {
                pair++; i+=2; 
            }
            else { i++;  }
         }
       leftover=nums.size()-(2*pair);
       
        ans.push_back(pair); ans.push_back(leftover);
        return ans;
        
    }
};