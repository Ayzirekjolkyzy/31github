class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        int count=1, temp=arr[0], ans;
        for(int i=1; i<n; i++) {
            if(arr[i]==temp) count++;
            else { if(count>=(n*0.25)) ans=temp;
                   temp=arr[i]; count=1;
        }}
        if(count>=(n*0.25)) ans=temp;
        return ans;
    }
};