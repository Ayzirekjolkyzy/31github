class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int sum=0;
        sort(cost.begin(), cost.end(), greater<int>());
        int i=0, t=0;
        while(i<cost.size()){
            if(t==2) {t=0; i++;}
            else{
            sum+=cost[i];
            i++; t++; }
        }
        return sum;
        
    }
};