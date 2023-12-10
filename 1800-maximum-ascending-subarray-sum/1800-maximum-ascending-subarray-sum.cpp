class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int temp=nums[0], sum=0;
        for(int i=0; i<nums.size()-1; i++) {
            if(nums[i]<nums[i+1]) temp+=nums[i+1];
            else {
                if(sum<temp) sum=temp; 
                temp=nums[i+1]; 
            }
        }
        if(sum<temp) sum=temp;
        return sum;
    }
};