class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int sum=0;
        sort(cost.begin(), cost.end());
        int i=cost.size()-1, t=0;
        while(i>=0){
            if(t==2) {t=0; i--;}
            else{
            sum+=cost[i];
            i--; t++; }
        }
        return sum;
        
    }
};
