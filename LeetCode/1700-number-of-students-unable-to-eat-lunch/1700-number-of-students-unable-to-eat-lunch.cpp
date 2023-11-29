class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sand) {
       deque<int> stud;
       for(int i=0; i<students.size(); i++) {
           stud.push_back(students[i]); 
       } 
       int count=0, k=0;
       while(!stud.empty()&&count<stud.size()) {
           if(stud.front()==sand[k]) {
               k++;
               count=0;}
            else {
                stud.push_back(stud.front());
                count++;
            }
            stud.pop_front();
        }
           
       return stud.size();

    }
};