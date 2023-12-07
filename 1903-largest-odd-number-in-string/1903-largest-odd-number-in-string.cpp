class Solution {
public:
    string largestOddNumber(string num) {
        if((num[num.length()-1])%2) return num;
        int n=num.length()-1;
            while(n>=0&&((((int)num[n])-48)%2==0))
            {
                num.erase(num.begin()+n); n--;
            }
            return num;
    }
};