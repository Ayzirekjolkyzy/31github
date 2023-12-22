class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        bool k=true; int temp=arr[1]-arr[0];
        for(int i=0; i<arr.size()-1; i++) {
            if(temp!=(arr[i+1]-arr[i])) { k=false; break;}
        }
        return k;
    }
};
