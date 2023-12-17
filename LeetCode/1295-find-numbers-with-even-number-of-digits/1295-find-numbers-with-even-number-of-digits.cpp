class Solution {
public:
    int findNumbers(vector<int>& nums) {
       int ret=0;
        for(int i=0; i<nums.size(); i++) {
           if(nums[i]>9&&nums[i]<100) ret++;
            else if(nums[i]>999&&nums[i]<10000) ret++;
            else if(nums[i]>99999&&nums[i]<1000000) ret++;
        }
        return ret;
    }
};
