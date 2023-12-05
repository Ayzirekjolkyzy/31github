class Solution {
public:
    string reformatDate(string date) {
        vector<string> month= {" ","Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        string ans="", day="";
        int pos;
        if(isalpha(date[1])) { day+='0'; day+=date[0]; pos=4; }
        else { day+=date[0]; 
                day+=date[1]; pos=5;}
        string m=date.substr(pos, 3);
        ans+=date.substr(pos+4, 4);
        ans+='-';
        for(int i=0; i<13; i++) {
            if(m==month[i]) {
                if(i>9) ans+=to_string(i);
                else { ans+='0'; ans+=to_string(i); }
            }}
        ans+='-';
        ans+=day;
           
            return ans;
    }
};
