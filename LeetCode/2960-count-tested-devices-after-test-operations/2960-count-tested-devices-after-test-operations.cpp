class Solution {
public:
    int countTestedDevices(vector<int>& batt) {
        int ret=0, n=batt.size(), j=0;
        for(int i=0; i<n; i++) {
            if(batt[i]>0) {
                ret++;
                j=i+1;
                while(j<n) {
                    batt[j]--;
                    j++;
                }
            }
        }
        return ret;
        
    }
};
