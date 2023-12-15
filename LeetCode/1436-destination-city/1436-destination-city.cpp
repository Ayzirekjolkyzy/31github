class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        bool k=false; string ans="";
      for(int i=0; i<paths.size(); i++) {
          k=0;
          for(int j=0; j<paths.size(); j++) {
              if(paths[i][1]==paths[j][0]) { k=true; break; } 
                  else k=false;
          }
          if(!k) { ans=paths[i][1]; break;}
      }  return ans;
    }
};
