
class Solution {
public:
    
    bool isPalindrome(long long x) {
        if(x<0) return false;
        else { 
            string val1=to_string(x), val2=val1;
            reverse(val1.begin(), val1.end());
             if(val1==val2) return true;
             return false;
        

        }
            

       
        
    }

};
