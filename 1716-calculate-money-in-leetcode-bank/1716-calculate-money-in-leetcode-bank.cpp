class Solution {
public:
    int totalMoney(int n) {
        int i=1, j=1, k=7, sum=0;
        while(i<=(n/7)) {
            j=i; k=7;
            while(k>0) {
                sum+=j;
                k--; j++;
            }
            i++; 
        } k=1;
        while(k<=(n%7)) {
            sum+=i; 
            i++; k++;
        }
        return sum;
    }
};