class Solution {
public:
    int numberOfMatches(int n) {
        int k=0;  
        while(n>1) {
            if(n%2) { k+=n/2; n=(n/2)+1; }
            else {k+=n/2; n=n/2; }
        } return k;
    }
};