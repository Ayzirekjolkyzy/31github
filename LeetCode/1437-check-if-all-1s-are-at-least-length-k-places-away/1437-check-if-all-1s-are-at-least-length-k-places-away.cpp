class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int temp=-1; bool ret=true;
        for(int i=0; i<nums.size(); i++) {
    if(nums[i]==1) { if((temp>=0)&&((i-temp-1)<k))  {ret=false; break;  }
                    temp=i; }
        }
     return ret;  
    }
};
