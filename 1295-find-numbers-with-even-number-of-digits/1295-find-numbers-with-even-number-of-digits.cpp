class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n, j=0, ret=0;
        for(int i=0; i<nums.size(); i++) {
            n=nums[i]; j=0;
            while(n>0) {
                j++; n/=10;
            }
            if(j%2==0) ret++;
        }
        return ret;
    }
};