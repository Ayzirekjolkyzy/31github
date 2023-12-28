class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        bool k=true;
        for(int i=0; i<nums.size()-1; i+=2) {
            if(nums[i]!=nums[i+1]) { k=false; break;}
        }
                    return k;

    }
};
