class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int ans=money;
        ans-=prices[0]; ans-=prices[1];
        if(ans>=0) {
            return ans;
        }
        return money;
    }
};
