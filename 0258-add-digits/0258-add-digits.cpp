class Solution {
public:
    int addDigits(int n) {
        if(n<10)
            return n;
        
        int k=0;
        
        while(n){
            while(n){
            k += n%10;
            n /= 10;}
            if(k>9)
            {
                n = k;
                k = 0;
            }
        }
        

        return k;
    }       
};