class Solution {
public:
    string thousandSeparator(int n) {
        if(n==0) return "0";
        string ans=""; 
        stack<char> temp; char t; int i=1;
        while(n>0) {
            if(i/4>0) { temp.push('.'); i=1; }
            t=(char)(n%10)+'0';
            temp.push(t);
            n/=10; i++;
            
        }
        while(!temp.empty()) {
            ans+=temp.top();
            temp.pop();

        }
        return ans;
    }
};
