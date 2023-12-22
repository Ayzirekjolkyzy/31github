class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int j=nums.size()-1, t1=0, t2=0, ret=-1;
        while(j>=0) {
                t2+=nums[j];
                j--;}
        for(int i=0; i<nums.size(); i++) {
            if(i>0) t1+=nums[i-1];
            t2-=nums[i];
           if(t1==t2) { ret=i; break;} 
        }
        return ret;
    }
};