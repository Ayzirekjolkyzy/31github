class Solution {
public:
    int findFinalValue(vector<int>& nums, int orig) {
        bool k=true;
        while(k) {
             for(int i=0; i<nums.size(); i++) {
                 if(orig==nums[i]) { orig=orig*2; k=true; break;}
                 else k=false;
             }
        }
        return orig;
    }
};