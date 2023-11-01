class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for(int e : students)
            q.push(e);
        int i=0,size = sandwiches.size(),count=0;
        while(i < size && count<q.size())
        {
            if(sandwiches[i] == q.front())
            {
                q.pop();
                ++i;count=0;
            }
            else{
                ++count;
                q.push(q.front());
                q.pop();
            }
        }
        
        return q.size();
    }
};