class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        vector<string> weeks={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        int sum=0; int i;
        for(i=1971; i<year; i++) {
            if((i%100&&i%4==0)||(i%100==0&&i%400==0)) sum+=366;
            else sum+=365;
        }
        for(i=1; i<month; i++) {
            if((i<8&&i%2)||(i>7&&i%2==0)) sum+=31;
            else sum+=30;
        }
        if(month>2) 
        {   if((year%100&&year%4==0)||(year%100==0&&year%400==0)) sum-=1;
            else sum-=2;
        }
        sum+=day;
        return weeks[(sum+4)%7];
    }
};
