class Solution {
public:
    int totalMoney(int n) {
        int ret=0, day, monday=1;
 while(n>0) {
     for(day=0; day<min(n, 7); day++)
     { ret+=monday+day;
      }
     n-=7; monday++;
 } return ret;
 }
};
